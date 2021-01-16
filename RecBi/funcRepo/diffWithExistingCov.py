def diffWithExistingCov(testname, compiler, passdir, failset, existingcovset, unionCovwithFail, passCov):

    if compiler != 'gcc' and compiler != 'llvm':
        raise Exception('Unkown compiler in diffWithExistingCov...')

    if len(os.listdir(passdir + '/passcov')) == 1:
        thisfile = open(passdir + '/passcov/' + testname + '/stmt_info.txt')
        thislines = thisfile.readlines()
        thisfile.close()

        thisset = set()
        if compiler == 'llvm':
            for i in range(len(thislines)):
                filenameitem = thislines[i].strip().split(':')[0]
                lineitems = thislines[i].strip().split(':')[1].split(',')
                for j in range(len(lineitems)):
                    thisset.add(filenameitem + ':' + lineitems[j])
        elif compiler == 'gcc':
            for i in range(len(thislines)):
                filenameitem = thislines[i].strip().split(':')[0].split('-build/')[1]
                lineitems = thislines[i].strip().split(':')[1].split(',')
                for j in range(len(lineitems)):
                    thisset.add(filenameitem + ':' + lineitems[j])

        existingcovset[testname] = thisset & failset
        unionCovwithFail[testname] = thisset | failset
        passCov[testname] = thisset
        return 0, existingcovset, unionCovwithFail, passCov  # different

    thisfile = open(passdir + '/passcov/' + testname + '/stmt_info.txt')
    thislines = thisfile.readlines()
    thisfile.close()

    thisset = set()
    if compiler == 'llvm':
        for i in range(len(thislines)):
            filenameitem = thislines[i].strip().split(':')[0]
            lineitems = thislines[i].strip().split(':')[1].split(',')
            for j in range(len(lineitems)):
                thisset.add(filenameitem + ':' + lineitems[j])
    elif compiler == 'gcc':
        for i in range(len(thislines)):
            filenameitem = thislines[i].strip().split(':')[0].split('-build/')[1]
            lineitems = thislines[i].strip().split(':')[1].split(',')
            for j in range(len(lineitems)):
                thisset.add(filenameitem + ':' + lineitems[j])

    for key in existingcovset.keys():
        similarity = float(len(existingcovset[key] & (thisset & failset))) / len(
            existingcovset[key] | (thisset & failset))
        if similarity == 1:
            return 1, existingcovset, unionCovwithFail, passCov  # same
    existingcovset[testname] = thisset & failset
    unionCovwithFail[testname] = thisset | failset
    passCov[testname] = thisset
    return 0, existingcovset, unionCovwithFail, passCov  # different