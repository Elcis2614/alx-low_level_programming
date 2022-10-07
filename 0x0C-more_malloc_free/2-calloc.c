#include "main.h"
/**
 *_calloc - allocates memory to a array
 *@nmemb: size of array
 *@size: size of each element
 *Return: the adress on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	int *c = (int *) malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}
	else if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		*(c + i) = 0;
	}
	return (c)

}
