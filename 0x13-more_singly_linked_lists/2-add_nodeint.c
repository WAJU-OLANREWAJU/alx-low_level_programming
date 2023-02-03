#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: head pointer
 *
 * @n: new node
 *
 * Return: the address of the new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_begin;

	if (head == NULL)
		return (NULL);

	new_node_begin = malloc(sizeof(listint_t));
	if (new_node_begin == NULL)
		return (NULL);

	new_node_begin->n = n;
	new_node_begin->next = *head;
	*head = new_node_begin;

	return (new_node_begin);

}
