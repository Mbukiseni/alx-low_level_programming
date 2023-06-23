#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be tested
 * Return: 1 fro uppercase character or 0 for anything else
 */

int _isupper(int x)

{
if (x >= '65' && x <= '90')
{
return (1);
}
return (0);
}
