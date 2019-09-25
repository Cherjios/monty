#include "monty.h"

/**
 * read_file - a function that frees a linked list.
 * Return: Nothing
 */
int read_file(void)
{
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	unsigned int fake_number = 1;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	char *cmd;
	char *number;

	while (getline(&line_buf, &line_buf_size, global()->file_pointer) > 0)
	{
		cmd = strtok(line_buf, " \t\n");
		f = get_op(cmd);
		if (!f)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", global()->line_num, cmd);
			return (EXIT_FAILURE);
		}
		number = strtok(NULL, " \t\n");
		global()->node_number = number;
		f(&(global()->global_head), fake_number);
		global()->line_num++;
		printf("After calling function -  Line Number: %d\n", global()->line_num);
	}
	free(line_buf);
	line_buf = NULL;
	return (EXIT_SUCCESS);
}
