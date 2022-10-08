#include "main.h"
/**
 *_calloc - allocates memory to an array
 *@nmemb: number of elements;
 *@size: size of each element
 *Return: a pointer to that array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c = (void *) malloc(nmemb * size);

	if (c == NULL)
		return (NULL);
	else if (nmemb == 0 || size == 0)
		return (NULL);
	return (c);
}
