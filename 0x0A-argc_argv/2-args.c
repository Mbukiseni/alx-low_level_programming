#include "main.h"
#include <stdio.h>

/**
  * main - Args content to be printed 
  * @argc: the number of arguments
  * @argv: the array of vectors
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
