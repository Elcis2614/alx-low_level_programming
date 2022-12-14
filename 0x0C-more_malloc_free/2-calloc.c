#include "main.h"
/**
 *_calloc - allocates memory to an array
 *@nmemb: number of elements;
 *@size: size of each element
 *Return: a pointer to that array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *temp;
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = (void *) malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	temp = (char *) c;
	for (i = 0; i < (nmemb * size); i++)
	{
		temp[i] = 0;
	}
	return (c);
}
