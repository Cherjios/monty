#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack.
 * @stack: head of the linked list
 * @line_number: line of command
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int ascii;
	(void) line_number;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", global()->line_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 32 || (*stack)->n > 128)
	{
		fprintf(stderr,"L%d: can't pchar, value out of range\n", global()->line_num);
		exit(EXIT_FAILURE);
	}
	else
	{
		ascii = (*stack)->n - 48 + '0';
		printf("%c\n", ascii);
	}
}
