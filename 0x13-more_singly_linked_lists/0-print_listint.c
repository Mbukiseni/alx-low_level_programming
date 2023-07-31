#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all components in a listint_t list.
 * @h: A pointer
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
