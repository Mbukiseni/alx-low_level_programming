#include "lists.h"

/**
 * dlistint_len - Counts the number of elements
 * @h: Head of the dlistint_t list.
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
