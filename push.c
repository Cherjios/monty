#include "monty.h"

/**
 * _push - creates new node at the top of the stack
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *current = *stack;
	(void) line_number;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		exit(EXIT_FAILURE);
	}
	if (!global()->node_number || check_num(global()->node_number) == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", global()->line_num);
	}
	new_node->n = atoi(global()->node_number);
	new_node->prev = NULL;

	if (current)
	{
		new_node->next = current;
		current->prev = new_node;
	}
	global()->global_head = new_node;
}
