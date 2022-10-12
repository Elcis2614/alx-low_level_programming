#include "main.h"
/**
 * free_dog - freeing a dog object
 * @d: dog pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
