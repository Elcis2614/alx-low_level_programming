#include "main.h"
/**
 * init_dog - initialize an onbject of type dog
 * @d: the dog object
 * @name: the name field
 * @age: age field
 * @owner: owner field
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
