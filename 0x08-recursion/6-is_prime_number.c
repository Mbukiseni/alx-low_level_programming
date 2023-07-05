#include "main.h"
#include <stdio.h>


int check_prime(int n, int i);

/**
  * is_prime_number - Checks if a number is prime
  * @n: number to be determined
  *
  * Return: value of integer
  */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Determine if the number is prime
  * @n: number to be determined
  * @i: number of iteration times
  *
  * Return: integer value
  */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
