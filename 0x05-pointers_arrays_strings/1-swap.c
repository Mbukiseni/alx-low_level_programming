#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The integer to swap
 * @b: The integer to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int z = *a;
	*a = *b;
	*b = z;
}
