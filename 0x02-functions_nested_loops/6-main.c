#include "main.h"
#include <stdio.h>

/**
 * main - The integer value.
 *
 * Return: The absolute value of the input.
 */
int main(void)
{
	int r;


	r = _abs(-1);

	printf("%d\n", r);

	r = _abs(0);

	printf("%d\n", r);

	r = _abs(1);

	printf("%d\n", r);

	r = _abs(-98);
	printf("%d\n", r);
return (0);
}
