#include "main.h"
/**
 *print_dog - print the dog info
 *@d: dog object
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else if (d->name == NULL)
			printf("Name: nil\n");
		if (d->age == NULL)
			printf("Age: nil");
		else
			printf("Age: %s\n", d->age);
		if (d->owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
