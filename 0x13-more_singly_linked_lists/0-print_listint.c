#include "lists.h"

/**
 * print_listint - prints the element of the list.
 * @h: header of the list
 *
 * Return: the number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *elements;

	elements = h;

	size_t count = 0;

	while (elements != NULL)
	{
		printf("%d\n", element->n);
		elements = elemnets->;
		count++;
	}
	return (count);
}
