#include "main.h"
#include <stdio.h>
/**
 * get_bit - obtain the value of a bit at a given index
 * @n: number to examine
 * @index: index beginning from 0, of the bit we want to obtain
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
