#include "monty.h"

/**
 * global - a function that gets the global variable.
 * Return: global variable
 */
global_t *global(void)
{
	static global_t global = {
		NULL,
		NULL,
		0,
		0,
	};

	return (&global);
}
