#include "lists.h"

/**
 * add_node_end - Add a new node at end of linked list
 * @head: Node head
 * @str: String token
 * Return: Linked list with node at end of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
