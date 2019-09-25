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
		printf("L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);

}
