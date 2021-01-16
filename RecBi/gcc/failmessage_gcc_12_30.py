import os,time
from configparser import ConfigParser

def checkIsPass_wrongcodeOneline(configFile, revisionNumber,compilationOptionsRight,compilationOptionsWrong): # change per bug

    cfg = ConfigParser()
    cfg.read(configFile)
    compilersdir = cfg.get('gcc-locations', 'compilersdir')
    prefixpath = compilersdir + revisionNumber + '/' + revisionNumber

    gccpath=prefixpath+'-build/bin/gcc'
    covdir=prefixpath+'-build/gcc'

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
    # exccmd(gccpath+' '+compilationOptionsRight+' mainvar.c')
    os.system(gccpath+' '+compilationOptionsRight+' mainvar.c')
    if not os.path.exists('a.out'):
        return 0 # compilation error

    if os.path.exists('rightfile'):
        os.system('rm rightfile')

    start=time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee rightfile')
    os.system('{ timeout 10 ./a.out ; } >rightfile 2>&1')
    end=time.time()
    if (end-start)>=10:
        return 0

    f=open('rightfile')
    lines=f.readlines()
    f.close()
    if len(lines)!=1:
        return 0
    else:
        if 'core dumped' in lines[0] or 'dumped core' in lines[0]:
            return 0

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
    os.system(gccpath+' '+compilationOptionsWrong+' mainvar.c')
    if not os.path.exists('a.out'):
        return 0

    if os.path.exists('wrongfile'):
        os.system('rm wrongfile')
    start=time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee wrongfile')
    os.system('{ timeout 10 ./a.out ; } >wrongfile 2>&1')
    end=time.time()
    if (end-start)>=10:
        return 0

    f=open('wrongfile')
    lines=f.readlines()
    f.close()
    if len(lines)!=1:
        return 0
    else:
        if 'core dumped' in lines[0] or 'dumped core' in lines[0]:
            return 0

    if os.path.exists('diffwr'):
        os.system('rm diffwr')
    os.system('diff wrongfile rightfile > diffwr')
    f=open('diffwr')
    lines=f.readlines()
    f.close()
    if len(lines)==0:
        return 1 # pass
    else:
        return 2 # still fail

def checkIsPass_onenumberandzero(configFile, revisionNumber,compilationOptionsRight,compilationOptionsWrong): # change per bug

    cfg = ConfigParser()
    cfg.read(configFile)
    compilersdir = cfg.get('gcc-locations', 'compilersdir')
    prefixpath = compilersdir + revisionNumber + '/' + revisionNumber

    gccpath=prefixpath+'-build/bin/gcc'
    covdir=prefixpath+'-build/gcc'

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
    # os.system(gccpath+' '+compilationOptionsRight+' mainvar.c')
    os.system(gccpath+' '+compilationOptionsRight+' mainvar.c')
    if not os.path.exists('a.out'):
        return 0

    if os.path.exists('rightfile'):
        os.system('rm rightfile')

    start=time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee rightfile')
    os.system('{ timeout 10 ./a.out ; } >rightfile 2>&1')
    end=time.time()
    if (end-start)>=10:
        return 0

    f=open('rightfile')
    lines=f.readlines()
    f.close()
    if len(lines)!=1:
        return 0
    if 'core dumped' in lines[0] or 'dumped core' in lines[0] or 'exception' in lines[0] or 'Abort' in lines[0] or 'Segmentation' in lines[0]:
        return 0

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find ' + covdir + ' -name \"*.gcda\" | xargs rm -f')
    os.system(gccpath + ' ' + compilationOptionsWrong + ' mainvar.c')
    if not os.path.exists('a.out'):
        return 0

    if os.path.exists('wrongfile'):
        os.system('rm wrongfile')
    start = time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee wrongfile')
    os.system('{ timeout 10 ./a.out ; } >wrongfile 2>&1')
    end = time.time()
    if (end - start) >= 10:
        return 0

    f = open('wrongfile')
    lines = f.readlines()
    f.close()
    # if len(lines)!=1:
    #     return 0

    if os.path.exists('diffwr'):
        os.system('rm diffwr')
    os.system('diff wrongfile rightfile > diffwr')
    f = open('diffwr')
    diffmesslines = f.readlines()
    f.close()
    if len(diffmesslines) == 0:
        return 1  # pass
    else:
        if len(lines) == 0:
            return 2  # still fail
        else:
            return 0
    
def checkIsPass_zeroandsegmentoneline(configFile, revisionNumber,compilationOptionsRight,compilationOptionsWrong): # change per bug

    cfg = ConfigParser()
    cfg.read(configFile)
    compilersdir = cfg.get('gcc-locations', 'compilersdir')
    prefixpath = compilersdir + revisionNumber + '/' + revisionNumber

    gccpath=prefixpath+'-build/bin/gcc'
    covdir=prefixpath+'-build/gcc'

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
    # os.system(gccpath+' '+compilationOptionsRight+' mainvar.c')
    os.system(gccpath+' '+compilationOptionsRight+' mainvar.c')
    if not os.path.exists('a.out'):
        return 0

    if os.path.exists('rightfile'):
        os.system('rm rightfile')

    start=time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee rightfile')
    os.system('{ timeout 10 ./a.out ; } >rightfile 2>&1')
    end=time.time()
    if (end-start)>=10:
        return 0

    f=open('rightfile')
    lines=f.readlines()
    f.close()
    if len(lines)!=0:
        return 0

    if os.path.exists('a.out'):
        os.system('rm a.out')
    os.system('find '+covdir+' -name \"*.gcda\" | xargs rm -f')
    os.system(gccpath+' '+compilationOptionsWrong+' mainvar.c')
    if not os.path.exists('a.out'):
        return 0

    if os.path.exists('wrongfile'):
        os.system('rm wrongfile')
    start=time.time()
    # os.system('timeout 10 ./a.out 2>&1 | tee wrongfile')
    os.system('{ timeout 10 ./a.out ; } >wrongfile 2>&1')
    end=time.time()
    if (end-start)>=10:
        return 0

    f=open('wrongfile')
    lines=f.readlines()
    f.close()
    # if len(lines)!=1:
    #     return 0

    if os.path.exists('diffwr'):
        os.system('rm diffwr')
    os.system('diff wrongfile rightfile > diffwr')
    f=open('diffwr')
    diffmesslines=f.readlines()
    f.close()

    if os.path.exists('diffow'):
        os.system('rm diffow')
    os.system('diff wrongfile oriwrongfile > diffow')
    f=open('diffow')
    diffowlines=f.readlines()
    f.close()

    if len(diffmesslines)==0:
        return 1 # pass
    else:
        if len(diffowlines)==0: # 'core dumped' in lines[0]:
            return 2 # still fail
        else:
            return 0
