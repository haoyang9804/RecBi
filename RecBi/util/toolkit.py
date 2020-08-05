import os, random

def exccmd(cmd):
    p = os.popen(cmd, "r")
    rs = []
    line = ""
    while True:
        line = p.readline()

        if not line:
            break
        # print line
        # rs.append(line.strip())
    p.close()
    return rs

def thirdpos(tmplist):
    tmp=sorted(tmplist)
    for i in range(len(tmplist)):
        if tmplist[i]==tmp[0]:
            return i+1

def diffWithExistingPass(passtestdir, failtestdir):
    if os.path.exists('difffilefail'):
        exccmd('rm difffilefail')
    if os.path.exists(failtestdir + '/fail.c'):
        exccmd('diff mainvar.c ' + failtestdir + '/fail.c' + ' >difffilefail')
    else:
        exccmd('diff mainvar.c ' + failtestdir + 'ori' + '/fail.c' + ' >difffilefail')
    difffail = open('difffilefail')
    difffaillines = difffail.readlines()
    difffail.close()
    if len(difffaillines) == 0:
        return 0  # exist
    for i in range(len(difffaillines)):
        if 'printf' in difffaillines[i]:
            return 0  # faking passing

    for f in os.listdir(passtestdir):
        if os.path.exists('difffile'):
            exccmd('rm difffile')
        exccmd('diff mainvar.c ' + passtestdir + '/' + f + ' >difffile')
        difff = open('difffile')
        diffflines = difff.readlines()
        difff.close()
        if len(diffflines) == 0:
            return 0  # exist

    return 1

def calSimilarityandDiversity(testname, passingcnt, existingcovset,
                              unionCovwithFail, averageSimilarity, passCov, averageDiversity):
    if passingcnt == 0:
        return 0, 0
    similarity = float(len(existingcovset[testname]) / len(unionCovwithFail[testname]))
    averageSimilarity_ = (similarity + averageSimilarity * (passingcnt - 1)) / passingcnt
    averageDiversity_ = 0
    if passingcnt == 1:
        averageDiversity_ = 0
    else:
        tempVal = 0
        for key in passCov.keys():
            if key == testname:
                continue
            #tempVal represents the sum of distance between the new passing test program and each existed passing one
            tempVal += float(len(passCov[testname] & passCov[key]) / len(passCov[testname] | passCov[key]))
        # tempVal2 represents the number we divide to generate the averageDiversity in the previous calculation
        tempVal2 = (1 + passingcnt - 2) * (passingcnt - 2) / 2
        # tempVal3 represents the number we divide to generate the averageDiversity in the current calculation
        tempVal3 = (1 + passingcnt - 1) * (passingcnt - 1) / 2
        averageDiversity_ = (averageDiversity * tempVal2 + tempVal) / tempVal3
    return averageSimilarity_, averageDiversity_

def calActionNo(classNo):
    if classNo == 1: return random.randint(0, 2)
    elif classNo == 2: return random.randint(3, 6)
    elif classNo == 3: return random.randint(7, 13)
    elif classNo == 4: return random.randint(14, 101)
    elif classNo == 5: return random.randint(102, 105)
    elif classNo == 6: return random.randint(106, 130)
    elif classNo == 7: return 131
    elif classNo == 8: return 132
    elif classNo == 9: return 133
    elif classNo == 10: return 134
    else: return 135

def metrics(resultlist):
    result = dict()
    sumouter=0
    for gcc in resultlist:
        gcc.sort()
        if gcc[0]<=1:
            sumouter+=1
    result['Top-1'] = sumouter

    sumouter=0
    for gcc in resultlist:
        gcc.sort()
        if gcc[0]<=5:
            sumouter+=1
    result['Top-5'] = sumouter

    sumouter=0
    for gcc in resultlist:
        gcc.sort()
        if gcc[0]<=10:
            sumouter+=1
    result['Top-10'] = sumouter

    sumouter=0
    for gcc in resultlist:
        gcc.sort()
        if gcc[0]<=20:
            sumouter+=1
    result['Top-20'] = sumouter

    sumouter=0.0
    for gcc in resultlist:
        gcc.sort()
        sumouter+=gcc[0]
    result['MFR'] = sumouter/len(resultlist)

    sumouter=0.0
    for gcc in resultlist:
        gcc.sort()
        suminner=0.0
        for i in range(len(gcc)):
            suminner+=gcc[i]
        sumouter+=(suminner/len(gcc))
    result['MAR'] = sumouter/len(resultlist)

    return result
