#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the
 *                   termination of a listint_t list
 * @head: Pointer to the address of the
 *        head of the listint_t list.
 * @n: The int for the new node to contain
 *
 * Return: 1 or 0
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
