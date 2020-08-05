import os
from ..util import thirdpos
from configparser import ConfigParser


def analyze(configFile):

    cfg = ConfigParser()
    cfg.read(configFile)

    reduced = cfg.get('llvm-rev', 'reduced').split(',')
    resultFile = cfg.get('llvm-locations', 'resultFile')
    loops = cfg.getint('params', 'loops')

    revisions = []

    finallist=[]
    group1=[]
    resultdict=dict()

    for loop in range(1, loops+1):

        resultFile2 = resultFile.split('.csv')[0] + str(loop) + '.csv'
        f = open(resultFile2)
        lines=f.readlines()
        f.close()

        resultlist=[]
        for i in range(len(lines)):
            if lines[i].startswith('r'):
                if loop==1:
                    revisions.append(lines[i].strip()[:7])
                tmplist=[]
                for j in range(i+1,len(lines)):
                    if 'lib' in lines[j]:
                        tmplist.append(int(lines[j].strip().split(',')[2]))
                    else:
                        i=j
                        resultlist.append(tmplist)
                        break
                if j==len(lines)-1:
                    # resultlist.append(tmplist)
                    break
        resultdict[loop]=resultlist

    #print len(resultdict[1])
    # print resultdict[0]
    for i in range(len(resultdict[1])):
        poslist=[]
        for k in range(1, loops+1):
            poslist.append(min(resultdict[k][i]))
        selectedpos=thirdpos(poslist)
        group1.append(selectedpos)
        if revisions[i] not in reduced:
            finallist.append(resultdict[selectedpos][i])
    if len(finallist) == 0:
        raise Exception('No mutated program has been generated..')
    return finallist

