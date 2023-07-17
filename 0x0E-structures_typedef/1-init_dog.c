#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Starts a dog structure
  * @d: A dog structure.
  * @name: dog's name
  * @age: the dog's age
  * @owner: dogs owner
  *
  * Return: Nothing
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
