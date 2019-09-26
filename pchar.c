#include "monty.h"

/**
 * _pchar - Prints the value at the top of the stack.
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", global()->cmd_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 31 || (*stack)->n > 128)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", global()->cmd_num);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", (*stack)->n);
}
