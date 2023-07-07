#include "main.h"

/**
*_memset - The _memset() function 
* the first n bytes 
* pointed 
*@s:target
*@b: constant byte
*@n:byte number
*Return: new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
