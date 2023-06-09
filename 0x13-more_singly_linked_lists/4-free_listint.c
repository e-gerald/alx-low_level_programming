#include "lists.h"

/**
 * free_listint - Free allocated memory in singly linked list
 * @head: Header node
 * Return: Freed memory
 */

void free_listint(listint_t *head)
{
	listint_t *temp = 0;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
