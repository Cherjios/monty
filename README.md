## Monty

**The Monty language**

Monty 0.98 is a scripting language that is first compiled into Monty byte codes 
(Just like Python). It relies on a unique stack, with specific instructions to 
manipulate it. The goal of this project is to create an interpreter for 
Monty ByteCodes files.

---

**Usage**

To run the program, enter: `./monty <file>`

Feel free to use `001.m` as a test file.

---

**Operations**
List of monty operations this interpreted understands:
- `push <integer>`: Pushes an integer on to the stack
- `pall`: Prints the values of every node on the stack
- `pint`: Prints the value of the node at the top of the stack
- `pop`: Pemoves the node at the top of the stack
- `swap`: Swaps the position of the top two nodes
- `add`: Places the sum of the top two nodes into the 2nd node and removes the
  first
- `nop`: Does nothing
- `sub`: Substracs the top element of the stack from the second top element of the stack
- `div`: Substracs the top element of the stack from the second top element of the stack

---

File Name | Description
--- | ---
`main.c` | Main program file
`monty.h` | Header file
`helpers.c` | Global variable, Free linkedlist
`math.c` | Functions that do mathematical operations to the stack
`methods.c` | Functions that modify the  stack (Push, pall, pint, pop, swap,)
`get_op.c` | Function that finds and executes a function based on opcode
`extra.c` | Function that modify the stack (nop, pchar, pstr, rotl, rotr)
`read_file.c` | Function that opens and reads files
---

This project was built by [Ryuichi Miyazaki](http://github.com/rmiyazaki6499) and
[Sergio Lopez](http://github.com/Cherjios) at
[Holberton School](http://holbertonschool.com)
