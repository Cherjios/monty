#include "monty.h"

/**
 * _pop - creates new node at the top of the stack
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node = *stack;
	(void) line_number;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", global()->line_num);
		exit(EXIT_FAILURE);
	}

	*stack = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = NULL;
	free(current_node);
}
