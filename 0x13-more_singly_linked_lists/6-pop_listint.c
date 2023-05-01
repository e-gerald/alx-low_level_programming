#include "lists.h"

/**
 * pop_listint - Write and pop singly linked list
 * @head: Head node
 * Return: Zero
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL)
		return (0);
	temp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = temp;
	return (value);
}
