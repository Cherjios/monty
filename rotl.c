#include "monty.h"

/**
 * _rotl - a function that reverses a linked list
 * @stack: head node
 * @line_number: line number
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *end_node = *stack;
	int temp;
	(void) line_number;

	if (*stack)
	{
		temp = (*stack)->n;
		while (end_node->next)
		{
			end_node->n = end_node->next->n;
			end_node = end_node->next;
		}
		end_node->n = temp;
	}
}
