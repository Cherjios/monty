#include "monty.h"

/**
 * read_file - a function that frees a linked list.
 * Return: Nothing
 */
int read_file(void)
{
	size_t line_buf_size = 0;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	char *cmd;
	char *number;

	while (getline(&(global()->line_buf), &line_buf_size, global()->file_pointer) > 0)
	{
		cmd = strtok(global()->line_buf, " \t\n");
		if (!cmd || strchr(global()->line_buf, '#') != NULL)
			continue;
		f = get_op(cmd);
		if (!f)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", global()->line_num, cmd);
			return (EXIT_FAILURE);
		}
		number = strtok(NULL, " \t\n");
		global()->node_number = number;
		global()->line_num++;
		f(&(global()->global_head), 1);
	}
	return (EXIT_SUCCESS);
}
