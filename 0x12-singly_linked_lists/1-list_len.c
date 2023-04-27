#include "lists.h"

/**
 * list_len - Find the number of elements in a linked list
 * @h: Head node
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
