#include "lists.h"

/**
 * find_listint_loop - Find the beginning of a loop in a linked list
 * @head: Head node
 * Return: Address of starting loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *ff = head;

	if (head == NULL)
		return (NULL);
	while (sl && ff && ff->next)
	{
		ff = ff->next->next;
		sl = sl->next;
		if (ff == sl)
		{
			sl = head;
			while (sl != ff)
			{
				sl = sl->next;
				ff = ff->next;
			}
			return (ff);
		}
	}
	return (NULL);
}

