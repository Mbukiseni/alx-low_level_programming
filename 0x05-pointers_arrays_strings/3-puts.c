#include "main.h"

/**
 * _puts - Prints the string
 * @str: String to print
 * Return: The length of the string
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');

}
