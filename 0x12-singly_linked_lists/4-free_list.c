#include "lists.h"

/**
 * free_list - Free linked list
 * @head: Node head
 * Return: Free allocaeted memory
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
