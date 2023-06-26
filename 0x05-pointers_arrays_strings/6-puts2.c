#include "main.h"

/**
 * puts2 - Prints character of a string in a rolling basis
 * @str: String to be treated
 * Return: 0
 */

void puts2(char *str)

{

	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
