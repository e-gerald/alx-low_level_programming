#include "lists.h"

/**
 * get_nodeint_at_index - Find nth node of a singly linked list
 * @head: Head node
 * @index: nth element
 * Return: value of nth element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
