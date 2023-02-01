#include "main.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t node_end;
	size_t n;

	node_end = malloc(sizeof(list_t));

	if (node_end == NULL)
		return (NULL);

	node_end->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node_end->len = n;
	node_end->next = NULL;

	list_t *temp

	temp = *head;

	if (temp == NULL)
	{
		*head = node_end;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_end;
	}

	return (*head);
}


