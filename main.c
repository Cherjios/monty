#include "monty.h"

/**
 * main - entry point for monty program
 * @argc: argument count
 * @argv: arguments
 * Return: EXIT_SUCCESS on success, else an error code
 */
int main(int argc, char *argv[])
{
	global()->file_pointer = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (!(global()->file_pointer))
	{
		fprintf(stderr, "Error opening file '%s'\n", argv[1]);
		return (EXIT_FAILURE);
	}
	read_file();
	free_linkedlist(global()->global_head);
	fclose(global()->file_pointer);

	return (EXIT_SUCCESS);
}
