#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory to be filled
 * @b: The char to copy
 * @n: The number of times to copy b
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
