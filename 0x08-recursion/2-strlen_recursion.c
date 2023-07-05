#include "main.h"

/**
  * _strlen_recursion - Determine the length of a string
  * @s: string to compute
  *
  * Return: value of an interger
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
