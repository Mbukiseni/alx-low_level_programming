#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's structure definition
 * @name: dog's name
 * @age: the dog's age
 * @owner: the dog's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
