#include "lists.h"


/**
 * add_node - Add a new node at the beginning of linked list
 * @str: String token
 * @head: Node head
 * 
 * Return: New node at head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
