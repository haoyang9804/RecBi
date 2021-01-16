#experimental environment
#torch version 1.4.0
#python version 3.7.3
import os, time, sys
from random import choice
from .failmessage_gcc_12_30 import *
from ..util import *
from configparser import ConfigParser


def collectCov(testname):
    exccmd('mkdir -p '+passdir+'/passcov/'+testname)
    methodfile=open(passdir+'/passcov/'+testname+'/method_info.txt','w')
    stmtfile=open(passdir+'/passcov/'+testname+'/stmt_info.txt','w')

    if os.path.exists('gcdalist'): # all files to be collected
        exccmd('rm gcdalist')
    exccmd('find '+srcdir+' -name \"*.c\" > gcdalist')
    exccmd('find '+srcdir+' -name \"*.h\" >> gcdalist')

    f=open('gcdalist')
    lines=f.readlines()
    f.close()

    for i in range(len(lines)):
        gcdafile=lines[i].strip().replace(srcdir,covdir)
        if '/gcc/testsuite/' in gcdafile:
            continue
        exccmd('cp '+lines[i].strip()+' '+gcdafile)
        exccmd('rm *.gcov')
        if os.path.exists('gcovfile'):
            exccmd('rm gcovfile')
        exccmd(gcovpath+' -f '+gcdafile+' > gcovfile')
        if not os.path.exists('./'+gcdafile.strip().split('/')[-1]+'.gcov'):
            continue

        f=open('gcovfile')
        gcovlines=f.readlines()
        f.close()

        for j in range(len(gcovlines)):
            if 'Function \'' in gcovlines[j].strip():
                if 'Lines executed:' in gcovlines[j+1].strip() and float(gcovlines[j+1].strip().split('Lines executed:')[1].split('%')[0].strip())!=0.0:
                    methodfile.write(gcdafile+','+gcovlines[j].strip().split('\'')[1]+','+gcovlines[j+1].strip().split('Lines executed:')[1].split('%')[0].strip()+','+gcovlines[j+1].strip().split('of')[-1].strip()+'\n')

        f=open(gcdafile.strip().split('/')[-1]+'.gcov')
        stmtlines=f.readlines()
        f.close()

        tmp=[]
        for j in range(len(stmtlines)):
            covcnt=stmtlines[j].strip().split(':')[0].strip()
            linenum=stmtlines[j].strip().split(':')[1].strip()
            if covcnt!='-' and covcnt!='#####':
                tmp.append(linenum)
        if len(tmp)==0:
            continue
        stmtfile.write(gcdafile+':'+','.join(tmp)+'\n')
    stmtfile.close()
    methodfile.close()

def diffWithExistingCov(testname):
    if len(os.listdir(passdir+'/passcov'))==1:
        thisfile=open(passdir+'/passcov/'+testname+'/stmt_info.txt')
        thislines=thisfile.readlines()
        thisfile.close()

        thisset=set()
        for i in range(len(thislines)):
            filenameitem=thislines[i].strip().split(':')[0].split('-build/')[1]
            lineitems=thislines[i].strip().split(':')[1].split(',')
            for j in range(len(lineitems)):
                thisset.add(filenameitem+':'+lineitems[j])
        existingcovset[testname]=thisset&failset
        unionCovwithFail[testname] = thisset | failset
        passCov[testname] = thisset
        return 0 # different

    thisfile=open(passdir+'/passcov/'+testname+'/stmt_info.txt')
    thislines=thisfile.readlines()
    thisfile.close()

    thisset=set()
    for i in range(len(thislines)):
        filenameitem=thislines[i].strip().split(':')[0].split('-build/')[1]
        lineitems=thislines[i].strip().split(':')[1].split(',')
        for j in range(len(lineitems)):
            thisset.add(filenameitem+':'+lineitems[j])

    for key in existingcovset.keys():
        similarity=float(len(existingcovset[key]&(thisset&failset)))/len(existingcovset[key]|(thisset&failset))
        if similarity==1:
            return 1 # same
    existingcovset[testname]=thisset&failset
    unionCovwithFail[testname] = thisset | failset
    passCov[testname] = thisset
    return 0 #different

# --------------------------------------- main process begin---------------------------------------
os.environ["OMP_NUM_THREADS"] = "1"
revisionnumber = sys.argv[1]
compilationOptionsRight = sys.argv[2].replace('+', ' ')
compilationOptionsWrong = sys.argv[3].replace('+', ' ')
checkpass = sys.argv[4]
roundcount = sys.argv[5]
configFile = sys.argv[6]
bugId = sys.argv[7]
cfg = ConfigParser()
cfg.read(configFile)
# password = cfg.get('password', 'password')
# autosudo = 'echo ' + password + ' | sudo -S '
GAMMA = cfg.getint('params', 'gamma')
compilersdir = cfg.get('gcc-locations', 'compilersdir') + revisionnumber + '/' + revisionnumber
passdir = cfg.get('gcc-locations', 'passdir') + roundcount + '/' + bugId
infodir = cfg.get('gcc-locations', 'infodir') + bugId

if os.path.exists(passdir):
    exccmd('rm -rf ' + passdir)
exccmd('mkdir -p ' + passdir)
os.chdir(passdir)
gccpath = compilersdir + '-build/bin/gcc'
gcovpath = compilersdir + '-build/bin/gcov'
covdir = compilersdir + '-build/gcc'
srcdir = compilersdir + '/gcc'

mutatedir = cfg.get('gcc-locations', 'mutatedir')
os.system('cp -r ' + mutatedir + '* .')

if os.path.exists(passdir + '/failtest'):
    exccmd('rm -rf ' + passdir + '/failtest')
exccmd('mkdir -p ' + passdir + '/failtest')
exccmd('cp ' + infodir + '/fail.c ' + passdir + '/failtest')
exccmd('mkdir -p ' + passdir + '/passcov')
failtestdir = './failtest'
firstfailtestdir = './firstfailtest'
exccmd('mkdir -p ' + firstfailtestdir)
passtestdir = './passtest'
exccmd('mkdir -p ' + passtestdir)

mutateRecord = open('mutateRecode', 'w')
successRecord = open('successRecord', 'w')

exccmd('cp ' + failtestdir + '/fail.c ' + './')
if os.path.exists('a.out'):
    exccmd('rm a.out')
exccmd(gccpath + ' ' + compilationOptionsWrong + ' fail.c')
if os.path.exists('oriwrongfile'):
    exccmd('rm oriwrongfile')
if not os.path.exists('a.out'):
    sys.exit(1)
# exccmd('./a.out 2>&1 | tee oriwrongfile')
exccmd('{ timeout 10 ./a.out ; } >oriwrongfile 2>&1')
# print 'start'
failcovpath = cfg.get('gcc-locations', 'infodir')
if os.path.exists(failcovpath + bugId + '/failcov/stmt_info.txt'):
    tarpath = failcovpath + bugId + '/failcov/stmt_info.txt'
elif os.path.exists(failcovpath + bugId + '/fail/stmt_info.txt'):
    tarpath = failcovpath + bugId + '/fail/stmt_info.txt'
else:
    print ("Error!!")
    sys.exit(1)
failfile = open(tarpath)
faillines = failfile.readlines()
failfile.close()
failset = set()
for i in range(len(faillines)):
    filename = faillines[i].strip().split(':')[0].split('-build/')[1]
    stmtlist = faillines[i].strip().split(':')[1].split(',')
    for j in range(len(stmtlist)):
        failset.add(filename + ':' + stmtlist[j])
#initialization
stepForward = cfg.getint('params', 'miu') # how many future steps we analyze
cntStepForward = 0 # cntOneBatch is the number of step in one batch, used for recording and quiting one batch
N_S = 11
N_A = 11
averageSimilarity = 0
averageDiversity = 0
ini_stat = np.ones(11)
actions = []
action_file_path = cfg.get('gcc-locations', 'actionFile')
action_file = open(action_file_path)
lines = action_file.readlines()
for i in range(len(lines)):
    line = lines[i].strip()
    actions.append(line)
addLine = [dict()]
for i in range(1, 4 + 1):
    addLine.append(dict())

passingcnt = 0 # passingcnt is the number of generated witness test program.
firstfailcnt = 0
# existingcovset is used for record the pair(passing test program, the intersection of the statement coverage of this program and that of failing test program)
existingcovset = dict()
# unionCovwithFail is used for record the pair(passing test program, the union of the statement coverage of this program and that of failing test program)
unionCovwithFail = dict()
# passCov is used for record the coverage of each passing test program. The form of each element is (testname, pair(filename, statement))
passCov = dict()
failtype = 'fail'
exccmd('mkdir -p ' + failtestdir + 'ori')

# averageTimesForLoopToGenerateOnePass and recordAverageTimes[] are used to detect the average steps we need to generate
# one passing test program. They are mainly used to tune hyperparameters: stepForward
# averageTimesForLoopToGenerateOnePass = 0
# recordAverageTimes = []
#buffer_s, buffer_a, buffer_r are used to record the states, actions and rewards during one 'stepForward'
buffer_s = []
buffer_a = []
buffer_r = []

alpha = cfg.getint('params', 'alpha')

net = Net(N_S, N_A)
optim = torch.optim.Adam(net.parameters(), lr = cfg.getint('params', 'beta'))

preInstantScore = 0 # used to store the instant score in the last round

recordfile = open('recordfile', 'w')

historyscore = []
for i in range(11):
    # the first element is the times we have selected this mutation class, the second one is the score
    historyscore.append([0,0])

# set the maximum number of witness test programs to 499(of course, it is impossible to
# produce so many programs in only one hour)
starttime = time.time()
while (passingcnt < 500):
    endtime = time.time()
    gaptime = endtime - starttime
    if gaptime > 3600: # set the time limit to one hour
        if len(os.listdir(passtestdir)) > 0:
            break
        else:
            starttime = time.time()
            exccmd('mv ' + failtestdir + '/* ' + failtestdir + 'ori')
            if len(os.listdir(firstfailtestdir)) == 0:
                break
            exccmd('mv ' + firstfailtestdir + '/* ' + failtestdir)
            failtype = 'firstfail'

    doesGeneratePassingTestProgram = False
    ############## select seed program
    # averageTimesForLoopToGenerateOnePass += 1
    mutatefile = ''
    # failtype=choice(passorfail)
    if failtype == 'fail':
        mutatefile = failtestdir + '/fail.c'
    elif failtype == 'firstfail':
        if len(os.listdir(passtestdir)) > 0:
            break
        # if len(os.listdir(failtestdir))==0:
        #     continue
        tmpfile = choice(os.listdir(failtestdir))
        mutatefile = failtestdir + '/' + tmpfile
    # else:
    #     if len(os.listdir(passtestdir))==0:
    #         continue
    #     tmpfile=choice(os.listdir(passtestdir))
    #     mutatefile=passtestdir+'/'+tmpfile
    optim.zero_grad()
    classNo = net.choose_action(v_wrap(ini_stat[None, :]))
    classNo = classNo.numpy()[0]
    actionNo = calActionNo(classNo)
    mutationNo = actionNo + 1
    commandMutate = actions[actionNo]

    classfile = commandMutate.strip().split(';')[0]
    testname = 'pass_' + classfile + str(mutationNo) + '_' + str(passingcnt+1)
    inputslist = commandMutate.strip().split(';')[1].split(',')
    for i in range(len(inputslist)):
        inputslist[i] = '\"' + inputslist[i] + '\"'
    inputsstr = ' '.join(inputslist)
    ############## mutate program
    exccmd('rm *.c')
    exccmd('cp ' + mutatefile + ' ./main.c')
    mutateRecord.write(mutatefile + ';' + commandMutate + ';' + str(mutationNo) + '\n')
    mutateRecord.flush()
    if os.path.exists('mainvar.c'):
        exccmd('rm mainvar.c')
    if classNo == 8 or classNo == 9:
        str_ = str(mutationNo) + '_' + str(passingcnt + 1)
        os.system('./' + classfile + ' main.c -- ' + str_)
    else:
        os.system('./' + classfile + ' main.c -- ' + inputsstr)  # mutate to generate new test program
    if os.path.exists('difftmp'):
        exccmd('rm difftmp')
    exccmd('diff main.c mainvar.c > difftmp')
    f = open('difftmp')
    difflines = f.readlines()
    f.close()
    if len(difflines) == 0:
        continue
    else:
        if os.path.exists('bugmessage'):
            exccmd('rm bugmessage')
        # exccmd('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
        # exccmd(gccpath+' '+compilationOptions+' mainvar.c 2>&1 | tee bugmessage')
        flagIsPass = -1
        if checkpass == 'checkIsPass_wrongcodeOneline':
            flagIsPass = checkIsPass_wrongcodeOneline(configFile, revisionnumber, compilationOptionsRight,
                                                                             compilationOptionsWrong)  # 1:pass; 2:still fail
        elif checkpass == 'checkIsPass_zeroandsegmentoneline':
            flagIsPass = checkIsPass_zeroandsegmentoneline(configFile, revisionnumber, compilationOptionsRight,
                                                                                  compilationOptionsWrong)  # 1:pass; 2:still fail
        elif checkpass == 'checkIsPass_onenumberandzero':
            flagIsPass = checkIsPass_onenumberandzero(configFile, revisionnumber, compilationOptionsRight,
                                                                                compilationOptionsWrong)  # 1:pass; 2:still fail
        else:
            raise Exception('unkown checkpass')

        if flagIsPass == 0:
            continue
        elif flagIsPass == 2:
            firstfailcnt += 1
            # if len(os.listdir(firstfailtestdir))==5000:
            #     exccmd('rm -rf '+firstfailtestdir+'/'+choice(os.listdir(firstfailtestdir)))
            exccmd('mv mainvar.c ' + firstfailtestdir + '/firstfail_' + classfile + str(mutationNo) + '_' + str(
                firstfailcnt) + '.c')
            continue
        else:
            flagIsExist = diffWithExistingPass(passtestdir, failtestdir)
            if flagIsExist == 0:
                continue
            else:
                passingcnt += 1
                collectCov(testname)
                flagCovIsRepetitive = diffWithExistingCov(testname)
                if flagCovIsRepetitive == 1:
                    exccmd('rm -rf ' + passdir + '/passcov/' + testname)
                    passingcnt -= 1
                    continue
                else:
                    f = open('difffilefail')
                    lines = f.readlines()
                    ju = False
                    if mutationNo > 132:
                        mutationNo2 = mutationNo - 132
                        for i in range(len(lines)):
                            line = lines[i]
                            if not line.startswith('>') and not line.startswith('<') and not line.startswith('-'):
                                if 'd' in line:
                                    lineNumber = line.split('d')[0]
                                    if lineNumber not in addLine[mutationNo2].keys():
                                        addLine[mutationNo2][lineNumber] = 1
                                        ju = True
                                    elif addLine[mutationNo2][lineNumber] == 1:
                                        addLine[mutationNo2][lineNumber] += 1
                                        ju = True
                                    else:
                                        ju = False
                                elif 'c' in line:
                                    lineNumber = line.split('c')[0]
                                    if lineNumber not in addLine[mutationNo2].keys():
                                        addLine[mutationNo2][lineNumber] = 1
                                        ju = True
                                    elif addLine[mutationNo2][lineNumber] == 1:
                                        addLine[mutationNo2][lineNumber] += 1
                                    else:
                                        ju = False
                    else:
                        ju = True
                    if ju:
                        doesGeneratePassingTestProgram = True
                        # recordAverageTimes.append(averageTimesForLoopToGenerateOnePass)
                        # averageTimesForLoopToGenerateOnePass = 0
                        exccmd('mv mainvar.c ' + passtestdir + '/pass_' + classfile + str(mutationNo) + '_' + str(
                            passingcnt) + '.c')
                        successRecord.write(mutatefile + ';' + commandMutate + ';' + str(mutationNo) + '\n')
                        successRecord.flush()
                    else:
                        exccmd('rm -rf ' + passdir + '/passcov/' + testname)
                        passingcnt -= 1
                        continue

    buffer_s.append(ini_stat)
    if doesGeneratePassingTestProgram:
        ini_stat[classNo] += 1
    buffer_a.append(classNo)
    averageSimilarity, averageDiversity = calSimilarityandDiversity(testname,passingcnt, existingcovset,
                                                                    unionCovwithFail, averageSimilarity, passCov, averageDiversity)
    instantScore = passingcnt * (alpha * averageDiversity + (1 - alpha) * averageSimilarity)
    instantReward = instantScore - preInstantScore

    # New
    recordfile.write('----------\n')
    recordfile.write('mutation rule: ' + commandMutate + '\n')
    recordfile.write('succeed? ' + str(doesGeneratePassingTestProgram) + '\n')
    recordfile.write('instantScore: ' + str(instantScore) + '\n')
    recordfile.write('instantScore ingoring n: ' + str(instantScore / passingcnt) + '\n')
    recordfile.write('instantReward: ' + str(instantReward) + '\n')
    recordfile.flush()

    # New
    if doesGeneratePassingTestProgram:
        if instantReward < 0:
            exccmd('rm -rf ' + passtestdir + '/pass_' + classfile + str(mutationNo) + '_' + str(passingcnt) + '.c')
            exccmd('rm -rf ' + passdir + '/passcov/' + testname)

    preInstantScore = instantScore
    historyscore[classNo][1] = (instantReward + historyscore[classNo][1] * historyscore[classNo][0]) \
                               / (historyscore[classNo][0] + 1)
    historyscore[classNo][0] += 1
    buffer_r.append(historyscore[classNo][1])
    cntStepForward += 1
    if(cntStepForward == stepForward): # one batch is over
        #calculate the loss function and backpropagate
        v_s_ = net((v_wrap(ini_stat[None, :])))[-1].data.numpy()[0, 0]
        buffer_v_target = []
        for r in buffer_r[::-1]:  # reverse buffer r
            v_s_ = r + GAMMA * v_s_
            buffer_v_target.append(v_s_)
        buffer_v_target.reverse()

        loss = net.loss_func(
            v_wrap(np.vstack(buffer_s)),
            v_wrap(np.array(buffer_a)),
            v_wrap(np.array(buffer_v_target)[:, None]))
        loss.backward()
        optim.step()
        cntOneBatch = 0
        buffer_a = []
        buffer_r = []
        buffer_s = []

recordfile.close()
successRecord.close()
mutateRecord.close()


