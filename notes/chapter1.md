# Chapter 1

## Table of Contents

  - [1.2 Computer Systems: Hardware and Software](#12-computer-systems--hardware-and-software)
  - [1.3 Source Code, Object Code, and Executable Code](#13-source-code--object-code--and-executable-code)

---

## 1.2 Computer Systems: Hardware and Software



## 1.3 Source Code, Object Code, and Executable Code

**Preprocessor**: a program that reads source code, searches for special lines that begin with the `#` symbol, which contain commands, or directives, that cause the preprocessor to amend or process the source code in some way.

**Compiler**: steps through the preprocessed source code and translates each source code instruction into the appropriate machine language instruction. This process will uncover any syntax errors that may be in the program. If the program is free of syntax errors, the compiler stores the translated machine language instructions, which are called object code, into an object file.

**Run-time library**: a library of prewritten code for performing common operations and sometimes-difficult tasks, such as hardware-specific code for displaying messages on the screen and reading input from the keyboard. Programs almost always use some part of it.

When the compiler generates an object file, however, it does not include machine code for any run-time library routines the programmer might have used. During the last phase of the translation process, another program called the linker combines the object file with the necessary library routines. Once the linker has finished this step, an executable file is created.