import os,random
import datetime
import os.path
import subprocess as subp
import sys
import thread

def exccmd(cmd):
    p=os.popen(cmd,"r")
    rs=[]
    line=""
    while True:
         line=p.readline()
         if not line:
              break
         #print line
         #rs.append(line.strip())
    return rs

testname='fail'

covdir='/devdata/Junjie/CompilerFL/llvmforme/r245480/r245480-build'
srcdir='/devdata/Junjie/CompilerFL/llvmforme/r245480/r245480'
gccdir='/devdata/Junjie/CompilerFL/llvmforme/r245480/r245480-build/bin'
resdir='/devdata/Junjie/CompilerFL/llvmforme/result/r245480-cov'
# resdir='/home/seitest/chenjj/CompilerFL/r'+revision+'-cov'
#exccmd('mkdir '+resdir)
if os.path.exists(resdir+'/'+testname):
    exccmd('rm -rf '+resdir+'/'+testname)
exccmd('mkdir '+resdir+'/'+testname)
# exccmd('mkdir '+resdir+'/'+testname+'/method_info')
# exccmd('mkdir '+resdir+'/'+testname+'/stmt_info')
methodfile=open(resdir+'/'+testname+'/method_info.txt','w')
stmtfile=open(resdir+'/'+testname+'/stmt_info.txt','w')
#delete all .gcda files
exccmd('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
#compile test program
exccmd(gccdir+'/clang -Os '+testname+'.c') # change per bug

if os.path.exists('gcdalist'):
    exccmd('rm gcdalist')
exccmd('find '+covdir+' -name \"*.gcda\" > gcdalist')
# exccmd('find '+covdir+' -name \"*.h\" >> gcdalist')

f=open('gcdalist')
lines=f.readlines()
f.close()

for i in range(len(lines)):
    gcdafile=lines[i].strip()
    if '/clang/test/' in gcdafile:
        continue
    # exccmd('cp '+lines[i].strip()+' '+lines[i].strip().replace(srcdir,covdir))
    # os.chdir('/'.join(gcdafile.strip().split('/')[:-1]))
    exccmd('rm *.gcov')
    if os.path.exists('gcovfile'):
        exccmd('rm gcovfile')
    
    exccmd('gcov -f '+gcdafile+' > gcovfile')
    # exccmd('rm '+gcdafile)
    if not os.path.exists('./'+gcdafile.strip().split('/')[-1].split('.gcda')[0]+'.gcov'):
        continue

    f=open('gcovfile')
    gcovlines=f.readlines()
    f.close()

    # result=open(resdir+'/'+testname+'/method_info/'+gcdafile.strip().split(srcdir+'/')[-1].replace('/','+')+'.txt','w')
    for j in range(len(gcovlines)):
        if 'Function \'' in gcovlines[j].strip():
            if 'Lines executed:' in gcovlines[j+1].strip() and float(gcovlines[j+1].strip().split('Lines executed:')[1].split('%')[0].strip())!=0.0:
                methodfile.write(gcdafile.split(covdir+'/')[-1]+','+gcovlines[j].strip().split('\'')[1]+','+gcovlines[j+1].strip().split('Lines executed:')[1].split('%')[0].strip()+','+gcovlines[j+1].strip().split('of')[-1].strip()+'\n')
    # result.close()

    f=open(gcdafile.strip().split('/')[-1].split('.gcda')[0]+'.gcov')
    stmtlines=f.readlines()
    f.close()

    # result=open(resdir+'/'+testname+'/stmt_info/'+gcdafile.strip().split(srcdir+'/')[-1].replace('/','+')+'.txt','w')
    tmp=[]
    for j in range(len(stmtlines)):
        covcnt=stmtlines[j].strip().split(':')[0].strip()
        linenum=stmtlines[j].strip().split(':')[1].strip()
        if covcnt!='-' and covcnt!='#####':
            tmp.append(linenum)
    if len(tmp)==0:
        continue
    stmtfile.write(gcdafile.split(covdir+'/')[-1]+':'+','.join(tmp)+'\n')
    # os.chdir(resdir)

stmtfile.close()
methodfile.close()

            






