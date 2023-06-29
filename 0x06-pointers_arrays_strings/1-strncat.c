#include "main.h"

/**
 *  _strncat - Combines two strings using at most
 *
 *  Input number of bytes from src
 *
 *  @dest: String to be added on
 *
 *  @src: String to be added to dest
 *
 *  @n: Number of bytes from src to be added to dest
 *
 *  Return: Pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
