#include "main.h"

/**
*_isdigit - function that varies with character
*@c: character that was tested
*Return: returns 1 or 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
