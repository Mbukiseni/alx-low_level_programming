#include "main.h"



/**
 * _strncpy - Copies an inputted figure
 * bytes from string src into dest
 * @dest: Buffer storing the string copy
 * @src: Source string
 * @n: Maximum number of bytes to be copied from src
 * Return: Pointer to the prevailing string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);

}
