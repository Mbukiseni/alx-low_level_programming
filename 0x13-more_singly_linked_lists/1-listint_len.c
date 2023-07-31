#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Determines the number of components
 *               in a linked listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: Number of components in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
