#ifndef MAIN_H

#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
/**
 *struct dog - structure
 *@name: name of the dog
 *@age:age of the dog
 *@owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
