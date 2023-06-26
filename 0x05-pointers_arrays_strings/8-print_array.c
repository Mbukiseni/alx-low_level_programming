#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of the array of integers
 * @a: Integers of array
 * @n: The number of elements of an array to be printed
 * Return: 0
 */

void print_array(int *a, int n)

{

	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
