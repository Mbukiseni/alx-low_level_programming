#include "lists.h"

/**
 * sum_listint - Determine the sum of all the
 *               data (n) of a listint_t list
 * @head: Pointer to the head of the listint_t list
 *
 * Return: If the list is void - 0.
 *         Otherwise - the addition of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
