#include "main.h"

/**
 * print_diagonal - Draw diagonal lines in accordance to parameter
 * @n: Number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)

{

	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
