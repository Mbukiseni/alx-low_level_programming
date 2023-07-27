#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a brand new node at the commencement of a linked list
  * @head: Original linked list
  * @str: String to add to the brand new node
  *
  * Return: 1 or 0
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Determines the length of a string
  * @s: The string to count
  *
  * Return: Length of the string
  */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
