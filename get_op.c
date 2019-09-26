#include "monty.h"

/**
 * get_op - finds and executes a function based on opcode
 * @opcode: command
 * Return: void
 */
void (*get_op(char *opcode))(stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t get_op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"rotr", _rotr},
		{NULL, NULL}
	};

	for (i = 0; get_op[i].opcode; i++)
	{
		if (strcmp(opcode, get_op[i].opcode) == 0)
			return (get_op[i].f);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", global()->line_num, opcode);
	free(global()->line_buf);
	free_linkedlist(global()->global_head);
	exit(EXIT_FAILURE);
}
