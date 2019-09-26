#include "monty.h"

/**
 * _pchar - Prints the char value .
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

	if ((*stack)->n < 0 || (*stack)->n > 177)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", global()->cmd_num);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", (*stack)->n);
}
