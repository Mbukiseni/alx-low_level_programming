#include "lists.h"

/**
 * reverse_listint - Reverses the listint_t list
 * @head: Pointer to the address of
 *        the head of the list_t list
 *
 * Return: Pointer to the 1st node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
