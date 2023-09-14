#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Pointer to the head of the dlistint_t list.
 * @n: Integer for the new node to contain.
 *
 * Return: If the function fails - VOID.
 *         Otherwise - the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
