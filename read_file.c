#include "monty.h"

/**
 * read_file - a function that reads files.
 * Return: Exti success
 */
int read_file(void)
{
	size_t buf_size = 0;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	char *cmd;
	char *number;

	while (getline(&(global()->line_buf), &buf_size, global()->file_pointer) > 0)
	{
		global()->cmd_num++;
		cmd = strtok(global()->line_buf, " \t\n");
		if (!cmd || strchr(global()->line_buf, '#') != NULL)
			continue;
		f = get_op(cmd);
		number = strtok(NULL, " \t\n");
		global()->node_number = number;
		f(&(global()->global_head), 1);
	}
	return (EXIT_SUCCESS);
}
