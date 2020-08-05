from multiprocessing import Pool
from RecBi.util import *
from configparser import ConfigParser

def run(bugId, revision, right, wrong, checkpass, k, configFile):
    import os
    path = os.getcwd() + '/RecBi/llvm/search-A2C.py'
    os.system('python '+ path + ' ' + revision+' '+right+' '+wrong+' '+checkpass+' '+str(k) + ' ' + configFile + ' ' + bugId)

def batchrun(bugIds, revisions, rights, wrongs, checkpasses, configFile):

    cfg = ConfigParser()
    cfg.read(configFile)
    batch_num = cfg.getint('params', 'batch_num')
    loops = cfg.getint('params', 'loops')

    p = Pool(processes = batch_num)
    for k in range(1, loops+1):
        for i in range(len(revisions)):
            bugId = bugIds[i]
            revision = revisions[i]
            right = rights[i]
            wrong = wrongs[i]
            checkpass = checkpasses[i]
            p.apply_async(run, args=(bugId, revision, right, wrong, checkpass, k, configFile))
    p.close()
    p.join()

if __name__ == '__main__':
    bugIds = ['15920']
    revisions = ['r181189']
    rights = ['-O2']
    wrongs = ['-O3']
    checkpasses = 'checkIsPass_wrongcodeOneline'
    cfg = ConfigParser()
    cfg.read('config/config.ini')
    configFile = cfg.get('llvm-locations', 'configFile')
    batchrun(bugIds, revisions, rights, wrongs, checkpasses, configFile)