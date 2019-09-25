#include "monty.h"

/**
 * main - entry point for monty program
 * @argc: argument count
 * @argv: arguments
 * Return: EXIT_SUCCESS on success, else an error code
 */
int main(int argc, char *argv[])
{
	FILE *file_pointer = fopen(argv[1], "r");
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	unsigned int fake_number = 1;
/*	ssize_t line_size = 0;  */
	size_t line_count = 0;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	char *command;
	char *number;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file %s\n", argv[1]);
		exit(EXIT_FAILURE);	
	}
	if (!file_pointer)
	{
		fprintf(stderr, "Error opening file '%s'\n", argv[1]);
		return (EXIT_FAILURE);
	}
	/*
	getline(&line_buf, &line_buf_size, file_pointer);
	command = strtok(line_buf, " \t\n");
	f = get_op(command);
	if (!f)
	{
		fprintf(stderr, "L<line_number>: unknown instruction <opcode>\n");
		return (EXIT_FAILURE);
	}
	number = strtok(NULL, " \t\n");
	if (number)
		global()->node_number = atoi(number);
	f(global()->global_head, fake_number);
	line_count += 1;
	if (line_size == -1)
	{
		return (EXIT_FAILURE);
	}
*/	while(getline(&line_buf, &line_buf_size, file_pointer) > 0)
	{
		line_count++;
		command = strtok(line_buf, " \t\n");
		f = get_op(command);
		if (!f)
		{
			fprintf(stderr, "L<line_number>: unknown instruction <opcode>\n");
			return (EXIT_FAILURE);
		}
		number = strtok(NULL, " \t\n");
		if (number)
			global()->node_number = atoi(number);
			printf("%i\n", global()->node_number);
		f(global()->global_head, fake_number);
	}
	global()->line_number = line_count;

	free(line_buf);
	line_buf = NULL;

	fclose(file_pointer);

	return (EXIT_SUCCESS);
}
