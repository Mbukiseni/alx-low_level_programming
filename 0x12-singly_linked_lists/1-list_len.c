#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Determine the number of elements of a linked list
  * @h: Linked list
  *
  * Return: The number of components of a list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
