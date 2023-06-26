#include <stdio.h>

/**
 *  _strlen - Returns length of the string
 * @str: The length of the string that is gotten
 * Return: The length of the string
 */
size_t _strlen(const char *str)

{
	size_t x = 0;

	while (*str++)
	x++;
	return (x);
}
