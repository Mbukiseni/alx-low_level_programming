#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be tested
 * Return: 1 fro uppercase character or 0 for anything else
 */

int _isupper(int c)

{
if (c >= '65' && c <= '90')
{
return (1);
}
return (0);
}
