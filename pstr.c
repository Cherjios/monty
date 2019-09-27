#include "monty.h"

/**
 * _pstr - Prints the string starting at the top of the stac,
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node = *stack;
	(void) line_number;

	while (temp_node->next)
	{
		if (temp_node->next == 0 || temp_node->n < 32 || temp_node->n > 177)
			break;

		printf("%c", temp_node->n);
		temp_node = temp_node->next;

	}
	printf("\n");
}

