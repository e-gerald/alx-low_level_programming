#include "lists.h"

/**
 * free_listint2 - Free memory and assign head to NULL
 * @head: Head of node
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

