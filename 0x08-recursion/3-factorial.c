#include "main.h"

/**
  * factorial - Determine the factorial of an integer
  * @n: Integer to determine the factorial
  *
  * Return: value of an integer
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
