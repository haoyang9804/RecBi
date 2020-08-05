from RecBi.llvm import *
from RecBi.util import metrics
from configparser import ConfigParser

cfg = ConfigParser()
cfg.read('config/config.ini')
configFile = cfg.get('llvm-locations', 'configFile')
bugList = cfg.get('llvm-locations', 'bugList')
compilersdir = cfg.get('llvm-locations', 'compilersdir')
infodir = cfg.get('llvm-locations', 'infodir')

revisions = []
bugIds = []
rights = []
wrongs = []
checkpasses = []

revfile = open(bugList)
revlines = revfile.readlines()
revfile.close()

for i in range(len(revlines)):
    bugIds.append(revlines[i].strip().split(',')[0])
    revisions.append(revlines[i].strip().split(',')[1])
    rights.append(revlines[i].strip().split(',')[2])
    wrongs.append(revlines[i].strip().split(',')[3])
    checkpasses.append(revlines[i].strip().split(',')[4])

reduced = cfg.get('llvm-rev', 'reduced').split(',')
#print(reduced)

revisions = list(set(revisions) - set(reduced))

mode = cfg.get('mode', 'mode')
if mode != 'verification' and mode != 'utilization':
    raise Exception('Unknown mode... Please check config.ini and correct it.')

print('\033[1;35m Begin batchrun\033[0m')
batchrun(bugIds, revisions, rights, wrongs, checkpasses, configFile)
print('\033[1;35m Begin delete\033[0m')
delete(configFile)
if mode == 'verification':

    print('\033[1;35m mode::verification\033[0m')

    print('\033[1;35m Begin rank\033[0m')
    rank(revisions, bugIds, configFile)
    print('\033[1;35m Begin analyze\033[0m')
    finallist = analyze(configFile)
    result = metrics(finallist)
    print('\033[1;35m finallist = ', finallist,'\033[0m')
    print('\033[1;35m result = ', result,'\033[0m')
elif mode == 'utilization':
    print('\033[1;35m mode::utilization\033[0m')

    print('\033[1;35m Begin rank_\033[0m')
    rank_(revisions, bugIds, configFile)
    rankFile = cfg.get('llvm-locations', 'rankFile')
    print('\033[1;35m Ranking list has been recorded in ', rankFile,'\033[0m')