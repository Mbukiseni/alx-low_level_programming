#include "main.h"

/**
 *_strcat - concatenates a string pointed by @src to
 * the end of the string pointed to by @dest
 *@dest: String
 *@src: The string to be concatenated on
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
