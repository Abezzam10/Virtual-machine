# BSKIT -- Virtual-machine

To gain a deeper understanding of how computers work at a low level I built out a simple implementation of a virtual machine written in C.

## Prerequisites to run bskit:
```
1. GCC - Any `C` compiler
2. EMACS or VIM to view the written file after execution
```

## Running bskit:

1. ``` gcc bskit.c ```
2. An `a.out` file gets generated. Open this with Emacs to view.


# BSKIT
bskit is a really simple virtual machine. It's written in C and is only one small C file.

The virtual machine is a set of registers: A, B, C, D, E, and F. These are general purpose registers, which means that they can be used for storing anything. 

## Registers

```
register	purpose
-------------------------------
A			general purpose
B			general purpose
C			general purpose
D			general purpose
E			general purpose
F			general purpose
EX 			extra
EXA 		extra
IP			instruction pointer
SP			stack pointer

```
 
## Instructions 

The program will be a read-only sequence of instructions. The virtual machine is a stack-based virtual machine, which means that it has a stack we can push and pop values to, and a few registers we can use too. These are also a lot more simpler to implement than a register-based virtual machine.

These are some of the sets of instructions I have implemented:

```
operation   value   usage    	function
---------------------------------------------------------------------
HLT  0      hlt 	 			halts program
PSH  1      psh val  			pushes <val> to stack
POP  2      pop 	 			pops value from stack
ADD  3      add 	 			adds top two vals on stack
MUL  4      mul 	 			multiplies top two vals on stack
DIV  5      div 	 			divides top two vals on stack
SUB  6      sub 	 			subtracts top two vals on stack
MOV  7      mov reg_a, reg_b 	movs the value in reg_a to reg_b 
SET  8      set reg, val 		sets the reg to value
LOG  9      log a 				prints out a
IF   10     if reg val ip 		if the register == val branch to the ip
IFN  11     ifn reg val ip 		if the register != val branch to the ip
GLD  10     gld reg 			loads a register to the stack
GPT  11     gpt reg 			pushes top of stack to the given register
NOP  12     nop 				nothing

```




In addition to the program itself you can pass in files to the program and run command executions on it with the format `~/.bskit` extension. Here I have used the `~/.test.bskit` which is passed as an argument to the program `./bskit test.bskit` and it will execute the program.