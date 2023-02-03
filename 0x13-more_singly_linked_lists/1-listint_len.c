include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *element = h;
	size_t count = 0;

	while (element != NULL)
	{
		element = element->next;
		count++;
	}
	return (count);
}
