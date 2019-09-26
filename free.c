#include "monty.h"

/**
 * free_linkedlist - a function that frees a linked list.
 * @head: pointer to head node
 * Return: Nothing
 */
void free_linkedlist(stack_t *head)
{
	stack_t *free_node = head;
	stack_t *temp;

	if (head)
	{
		while (free_node)
		{
			temp = free_node->next;
			free(free_node);
			free_node = temp;
		}
	}
}

