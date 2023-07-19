#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - a + b
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: total of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - b - a
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: b - a
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - a * b
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: a and b multiplication
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a / b
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: a by b division
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - determine the remainder of the division of a by b
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: the division of a by b remainder
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
