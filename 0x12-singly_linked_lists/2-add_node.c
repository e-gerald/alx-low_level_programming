#include "lists.h"

/**
 * add_node - Add a new node at the beginning of linked list
 * @str: String token
 * @head: Node head
 * Return: New node at head
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;

	while (str[len])
		len++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}
