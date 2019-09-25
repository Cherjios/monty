# Monty

## The Monty Language 

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

###Monty byte code file

Files containing Monty byte codes usually have the .m extension.

###Usage

To run the program, enter: ./monty <file>

For example we can use ./monty /00.m

###Operations 

List of monty operations this interpreted understands:
push <integer>: pushes an integer on to the stack
pall: prints the values of every node on the stack
pint: prints the value of the node at the top of the stack
pop: removes the node at the top of the stack
swap: swaps the position of the top two nodes
add: places the sum of the top two nodes into the 2nd node and removes the first
nop: does nothing

|File name   | Description  |
|_____________|:____________:|
|monty.c      | Main progra  |
|_____________|_____________:|
