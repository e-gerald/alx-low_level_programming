#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at specified index
 * @head: Node head
 * @index: Specified index to delete
 * Return: Nodes without specified index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *p = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	p = temp->next;
	temp->next = p;
	free(p);
	return (1);
}
