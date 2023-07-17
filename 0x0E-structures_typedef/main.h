#ifndef MAIN_H
#define MAIN_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
