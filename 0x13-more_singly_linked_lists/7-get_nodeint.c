#include "lists.h"

/**
 * get_nodeint_at_index - Finds a given node of
 *                        a listint_t linked list
 * @head: Pointer to the head of the listint_t list
 * @index: Index of the node to find - indices begin at 0.
 *
 * Return: If the node does not exist - 0
 *         Otherwise - the find node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
