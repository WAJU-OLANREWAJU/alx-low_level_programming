#include "lists.h"

/**
 * listint_len - adds a new node at the beginning of a listint_t list.
 *
 * @h: head pointer
 *
 * Return: the address of the new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
		return (NULL);

	listint_t *new_node_begin;
	
	new_node_begin = malloc(sizeof(listint_t));
	if (new_node_begin == NULL)
		return (NULL);

	new_node_begin = n;
	new_node_begin->next = *head;
	*head = new_node_begin;

	return (new_node_begin);

}
