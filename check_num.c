#include "monty.h"

/**
 * check_num - checks if string is a valid number
 * @string: input
 * Return: 1 if true, -1 if false
 */
int check_num(char *string)
{
	char c;
	int minusCount = 0;

	if (string == NULL || *string == '\0')
		return (-1);

	while (*string)
	{
		c = *string;
		switch (c)
		{
			case '-':
			if (++minusCount > 1)
				return (-1);
		default:
			if (c < '0' || c > '9')
				return (-1);
		}
		string++;
	}
	return (1);
}
