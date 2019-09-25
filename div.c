#include "monty.h"

/**
 * _div - Adds the value of the top two nodes and
 * removes the top node
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", global()->line_num);
		exit(EXIT_FAILURE);
	}

	temp->next->n = temp->next->n / temp->n;
	_pop(&(*stack), 1);
}
