#include "lists.h"

/**
 * print_listint - Print all element in a singly linked list
 * @h: Integer token
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			return (0);
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
