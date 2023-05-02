#include "lists.h"

/**
 * free_listint_safe - Free memory using loop in a linked list
 * @h: Header node
 * Return: Number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int sub;
	listint_t *temp;

	if (*h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
