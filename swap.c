#include "monty.h"

/**
 * _swap - swaps the top of the stack with the node before
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node = *stack;
	(void) line_number;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", global()->line_num);
		exit(EXIT_FAILURE);
	}

	*stack = temp_node->next;
	if ((*stack)->next != NULL)
	{
		(*stack)->next->prev = temp_node;
		temp_node->next = (*stack)->next;
		temp_node->prev = *stack;
		(*stack)->next = temp_node;
		(*stack)->prev = NULL;
	}
	free(temp_node);
	global()->line_num += 1;
	printf("Pop! Node Number: %d\n", atoi(global()->node_number));
}
