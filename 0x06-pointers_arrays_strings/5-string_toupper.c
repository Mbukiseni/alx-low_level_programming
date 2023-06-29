#include "main.h"

/**
 * string_toupper - To change all lowercase letters
 * string to uppercase
 * @str: Change the string
 * Return: Pointer to the changed string
 *
 */

char *string_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
