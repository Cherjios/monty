#include "monty.h"

/**
 * push - creates new node at the top of the stack
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	(void) line_number;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit (EXIT_FAILURE);
	}
	new_node->n = global()->node_number;
	new_node->prev = NULL;
	if (stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	global()->global_head = &new_node;
	global()->line_number += 1;
	printf("I'm pushing!\n");
}
