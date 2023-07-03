#include "main.h"

/**
 * _memcpy - Function copies from memory area
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
