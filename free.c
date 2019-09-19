#include "linkedlist.h"

/**
 * free_linkedlist - a function that frees a str_ll linked list.
 * @head: pointer to head node
 * Return: Nothing
 */
void free_linkedlist(void)
{
	stack_t *head = global()->global_head
	stack_t *free_node;


	while (head)
	{
		free_node = head->next;
		free(head);
		head = free_node;
	}
}
