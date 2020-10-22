# RecBi

RecBi is a new-born technique proposed in paper ***Enhanced Compiler Bug Isolation via Memoized Search***(written by Junjie Chen, Haoyang Ma and Lingming Zhang) for compilers' **fault localization**.

In this paper, we utilize two popular C compilers, LLVM and GCC, to experiment on the performance of RecBi. All our experiments are based on GCC svn repository and LLVM svn repository. Because GCC svn repository has been converted to git, we could not provide reproducible experiments about GCC bugs. In this project, we *only* implement the llvm part of RecBi. GCC part and LLVM part with git will be implemented some day in the future.

---

Here follows some steps for installing, deploying and running RecBi in your Linux workstation.

## Installing

`git clone https://github.com/haoyang9804/RecBi.git`

In this step, do **not** place sudo before git. Permission problem will disable RecBi project.

Then,  run `chmod -R 777 RecBi`to circumvent permission problem.

## Deploying -1:  preparing for installing target LLVM trunk

 In llvmbugs.txt, you can add LLVM bugs from [bugzilla](https://bugs.llvm.org/) according to the following format:

```
bugId,LLVM trunk revision number,the optimization level that would not trigger the bug, the optimization level that would trigger the bug,bug type,installing situation
```

An example of this format is shown in llvmbugs.txt of this repository:

`15920,r181189,-O2,-O3,checkIsPass_wrongcodeOneline,install_no`

`install_no` means this LLVM trunk has not been installed while `install_yes` means the opposite; 

`bug type` is defined in `RecBi/llvm/failmessage_llvm_12_30.py`, in which we categorized experimental bugs into 4 types:

+ `checkIsPass_wrongcodeOneline`: the given program in bugzilla outputs one line wrongly when the bug is triggered. [Bug 15920](https://bugs.llvm.org/show_bug.cgi?id=15920) is of this category.
+ `checkIsPass_zeroandsegmentoneline`: the given program in bugzilla will crash when the bug is triggered, otherwise, it will output nothing . [Bug 16041](https://bugs.llvm.org/show_bug.cgi?id=16041) is of this category.
+ `checkIsPass_multilineswrongcode`: the given program in bugzilla outputs multi-lines wrongly when the bug is triggered. [Bug 25831](https://bugs.llvm.org/show_bug.cgi?id=25831) is of this category.
+ `checkIsPass_zeroandonenumber`:  the given program in bugzilla will output one number when the bug is triggered, otherwise, it will output nothing. [Bug 26256](https://bugs.llvm.org/show_bug.cgi?id=26256) is of this category

After installing the target llvm trunks, `install_no` will be replaced by `install_yes` and it will never be installed again unless you change this installing situation back.

For the information of all experimental bugs, you can check *benchmark* folder.

## Deploying -2:  configure bug information 

To finish bug information configuration, you should first know whether your target bugs are in our experimental bugs list by running `setup.py` and it will autonomously configure the information if the answer is yes, otherwise, our code will warn you and you should configure by yourself following the step below:

+ go to `../RecBi-workplace/llvmbugs/info/bugId/* `and create these two files:

  1. fail.c: the file recording the given program which can trigger the bug from bugzilla 
  2. locations: the file recording 1) the LLVM trunk revision number corresponding to this bug; 2) the revision number of one LLVM trunk which fixes this bug; 3) modified files and methods(These files and methods are the reason why this bug is triggered).

  Information needed in these files could be obtained from [llvm bugzilla](https://bugs.llvm.org/) and http://llvm.org/viewvc/llvm-project/

  An example(bug 15920) of *locations* is shown below

  ```
  test trunk:181189
  fixed revision:183035
  buggy locations
  file:llvm/trunk/lib/Transforms/Vectorize/LoopVectorize.cpp;method:LoopVectorizationLegality::canVectorizeInstrs()
  ```

## Running

RecBi has two mode shown in `RecBi/config/config.ini`: *verification* and *utilization*.

*verification* is for reproducing our experiments and the output of this mode is the metrics value according to our paper.

*utilization* targets at isolating unknown bugs with our technique. The output of this mode is a file named *rankFile.txt* in `../RecBi-workplace/llvmbugs/`, which records *suspiciousness value* of each involving compiler files in descending order. The bigger the suspiciousness value of the file, the more possible it causes the bug. You can change mode in `RecBi/config/config.ini`

RecBi project will run all bugs written in `llvmbugs.txt` unless you feed some bugIds separated by comma to `reduced` in `RecBi/config/config.ini`

Eventually, `python llvm-run.py` and get the output. The process of RecBi may take a while.

Welcome more people to enrich our benchmark for further-step research.

## Contact

Authors information:

|      Name      |     Email Adderess      |  Github Id  |
| :------------: | :---------------------: | :---------: |
|  Junjie Chen   |  junjiechen@tju.edu.cn  | JunjieChen  |
|   Haoyang Ma   | haoyang_9804@tju.edu.cn | haoyang9804 |
| Lingming Zhang |  lingming@illinois.edu  |  lingming   |

