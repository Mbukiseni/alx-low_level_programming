#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - numbers it prints, followed by a new line
  * @separator: print between numbers by separator
  * @n: quantity of numbers to print
  *
  * Return: 0
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1  && separator != NULL)
			0	printf("%s", separator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}
