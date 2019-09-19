#include "monty.h"

/**
 * _sub - Substracts the top two elements of the stack from the second
 * top element of the stack
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", global()->line_num);
		exit(EXIT_FAILURE);
	}

	temp->next->n = temp->next->n - temp->n;
	_pop(&(*stack), 1);
}
