#include "lists.h"

/**
 * sum_listint - Sum of data in a singly linked list
 * @head: Node head
 * Return: Sum of data in nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
