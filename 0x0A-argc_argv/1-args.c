#include "main.h"
#include <stdio.h>

/**
  * main - The number of args to be printed
  * @argc: the number of arguments
  * @argv: the array of arguments
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
