#include "lists.h"

/**
 * loop_listint - Loop through a linked list
 * @head: Node header
 * Return: Length of linked list
*/

size_t loop_listint(const listint_t *head)
{
	const listint_t *tort, *goat;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	goat = head->next->next;
	while (goat != NULL)
	{
		if (tort == goat)
		{
			tort = head;
			while (tort != goat)
			{
				count++;
				tort = tort->next;
				goat = goat->next;
			}
			tort = tort->next;
			while (tort != goat)
			{
				count++;
				tort = tort->next;
			}
			return (count);
		}
		tort = tort->next;
		goat = goat->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - Print values of linked list nodes
 * @head: Starting node
 * Return: Node values
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = loop_listint(head);
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
