#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize an onbject of type dog
 * @d: the dog object
 * @name: the name field
 * @age: age field
 * @owner: owner field
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
