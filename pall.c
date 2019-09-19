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
	stack_t *temp_node = *stack;
	(void) line_number;

	while (temp_node)
	{
		printf("%d\n", temp_node->n);
		temp_node = temp_node->next;
	}
}
