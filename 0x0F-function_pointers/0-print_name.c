#include "function_pointers.h"

/**
  * print_name - The function that prints a name
  * @name: Name to prints
  * @f: Name's function
  *
  * Return: 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
