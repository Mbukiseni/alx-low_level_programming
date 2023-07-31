#include "lists.h"

/**
 * add_nodeint - Adds a node at the start
 *               of a listint_t list
 * @head: Pointer to the address of the
 *        head of the listint_t list
 * @n: The int for the new node to contain
 *
 * Return: 1 or 0
 *         Otherwise - the address of the new component
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
