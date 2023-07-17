#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Starts a dog structure
  * @d: Dog structure.
  * @name: Dog's name
  * @age: The dog's age
  * @owner: The dog's owner
  *
  * Return: 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
