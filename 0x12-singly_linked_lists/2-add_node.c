#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - determines the length of a string
 * @str: the string to count
 *
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - Adds a new node to the start of a linked list
 * @head: original linked list
 * @str: string to add to the brand new node
 *
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
