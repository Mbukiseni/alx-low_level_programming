#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t
 * @head: The head of the dlistint_t
 *
 * Return: Sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
