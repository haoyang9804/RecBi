# RecBi

RecBi is a new-born technique proposed in paper ***Enhanced Compiler Bug Isolation via Memoized Search*** for compilers' **fault localization**.

In this paper, we utilize two popular C compilers, LLVM and GCC, to experiment on the performance of RecBi. All our experiments are based on GCC svn repository and LLVM svn repository. Because GCC svn repository has been converted to git, we could not provide reproducible experiments about GCC bugs. In this project, we *only* implement the llvm part of RecBi. GCC part will be implemented some day in the future.

---

Here follows some steps for installing, deploying and utilizing RecBi in your Linux workstation.

## Installing

`git clone https://github.com/haoyang9804/RecBi.git`

In this step, do **not** place sudo before git. Permission problem will disable RecBi project.

## Deploying 

 In llvmbugs.txt, you can add LLVM bugs from [bugzilla](https://bugs.llvm.org/) according to the following format:

`bugId,LLVM trunk revision number,the optimization level that would not trigger the bug, the optimization level that would trigger the bug,bug type,installing situation`

An example of this format is shown in llvmbugs.txt of this repository:

`15920,r181189,-O2,-O3,checkIsPass_wrongcodeOneline,install_no`

`install_no` means this LLVM trunk has not been installed while `install_yes` means the opposite; 

`bug type` is defined in `RecBi/llvm/failmessage_llvm_12_30.py`, in which we categorized experimental bugs into 4 types:

+ `checkIsPass_wrongcodeOneline`: the given program in bugzilla outputs one line wrongly when the bug is triggered. [Bug 15920](https://bugs.llvm.org/show_bug.cgi?id=15920) is of this category.
+ `checkIsPass_zeroandsegmentoneline`: the given program in bugzilla will crash when the bug is triggered, otherwise, it will output nothing . [Bug 16041](https://bugs.llvm.org/show_bug.cgi?id=16041) is of this category.
+ `checkIsPass_multilineswrongcode`: the given program in bugzilla outputs multi-lines wrongly when the bug is triggered. [Bug 25831](https://bugs.llvm.org/show_bug.cgi?id=25831) is of this category.
+ `checkIsPass_zeroandonenumber`:  the given program in bugzilla will output one number when the bug is triggered, otherwise, it will output nothing. [Bug 26256](https://bugs.llvm.org/show_bug.cgi?id=26256) is of this category

