#include "lists.h"

/**
 * add_nodeint - Add a node at the head of a singly linked list
 * @head: Current head of the node
 * @n: Integer
 * Return: Address of the node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
