#include "main.h"

/**
 * _strcat - Combine two strings
 * @dest:Destination string
 * @src:Source string
 * Return:Resulting
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
