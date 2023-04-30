#include "lists.h"

/**
 * listint_len - Find the strlen of the singly linked list
 * @h: Integer token
 * Return: Length of string
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != '\0')
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
