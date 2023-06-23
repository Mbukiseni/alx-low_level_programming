#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for lowercase character
 * @c: The character to be tested
 *
 * Return: 1 fro uppercase character or 0 for anything else
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
