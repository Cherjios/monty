#include "monty.h"

/**
 * _rotr - a function that reverses a linked list
 * @stack: head node
 * Return: void
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *before = NULL;
	stack_t *next = NULL;
	(void) line_number;

	if (*stack)
	{
		while ((*stack) != NULL)
		{
			next = (*stack)->next;
			(*stack)->next = before;
			(*stack)->prev = next;
			before = (*stack);
			(*stack) = next;
		}
		*stack = before;
	}
}
