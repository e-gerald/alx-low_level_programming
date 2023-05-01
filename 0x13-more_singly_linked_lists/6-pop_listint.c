#include "lists.h"

/**
 * pop_listint - Write and pop singly linked list
 * @head: Head node
 * Return: Zero
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);
	while (*head != NULL)
	{
		temp = (*head)->next;
		printf("%d\n", (*head)->n);
		free(*head);
		*head = temp;
	}
	return (0);
}
