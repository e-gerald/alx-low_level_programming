#include "lists.h"

/**
 * reverse_listint - Reverse nodes in a linked list
 * @head: Node head
 * Return: Reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;
	return (*head);
}
