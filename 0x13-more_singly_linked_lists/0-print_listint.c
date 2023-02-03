#include "lists.h"

/*
 * print_listint - prints the element of the list.
 * @h: head of the list
 *
 * Return: the number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *elements = h;

	size_t count = 0;

	while (elements != NULL)
	{
		printf("%d\n", element->n);
		elements = elements->next;
		count++;
	}
	return (count);
}
