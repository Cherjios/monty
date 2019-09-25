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
/*		{"pint", pint},
*/		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
/*		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", stack},
*/		{NULL, NULL}
	};

        if (opcode == NULL)
                return (NULL);
        for (i = 0; get_op[i].opcode; i++)
        {
                if (strcmp(opcode, get_op[i].opcode) == 0)
                        return (get_op[i].f);
        }
        return (NULL);
}
