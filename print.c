#include "monty.h"

/**
 * print - Prints the value at the top of the stack.
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void print(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

		printf("%d\n", stack->n);

}
