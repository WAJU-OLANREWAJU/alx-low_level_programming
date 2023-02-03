#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head pointer
 *
 * @n: new node end variable
 *
 * Return: the address of the new element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;

	if (*head == NULL)
		return (NULL);

	new_node_end = malloc(sizeof(listint_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;

	new_node_end->next = NULL;

	*head = new_node_end;

	return (new_node_end);
}
