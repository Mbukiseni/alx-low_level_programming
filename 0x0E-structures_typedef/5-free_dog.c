#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free dogs
  * @d: dog struct pointer
  *
  * Return: .
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
