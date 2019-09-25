#include "monty.h"

/**
 * _pall - Prints all the values on the stack,
 * starting from the top of the stack
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	while (*stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
