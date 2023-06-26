#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of the array of integers
 * @a: Integers of array
 * @n: The number of elements of an array to be printed
 * Return: 0
 */

void print_array(int *a, int y)

{

	int x;

	for (x = 0; x < y; x++)
	{
	printf("%d", a[x]);
	if (x != (y - 1))
	{
	printf(", ");
	}
	}
	printf("\y");
}
