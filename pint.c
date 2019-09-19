#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack.
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", global()->line_num);
		exit(EXIT_FAILURE);
	}
}
