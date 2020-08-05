# delete all redundant mutation strategy files, such as addIf, addWhile...
import os
from configparser import ConfigParser

def delete(configFile):
    cfg = ConfigParser()
    cfg.read(configFile)
    MR = ['addQualifier','addRepModifier','remModifierQualifier','repBinaryOp','repIntConstant',
          'repRemUnaryOp','repVarSameScope','addIf','addWhile','addGoto','addFunction', 'testFile']

    path = cfg.get('llvm-locations', 'passdir')

    files = os.listdir(path)
    for f in files:
        files2 = os.listdir(path + f)
        for f2 in files2:
            os.chdir(path+f+'/'+f2)
            for mr in MR:
                os.system('rm -rf '+ mr)
