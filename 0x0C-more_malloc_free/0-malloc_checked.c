#include "main.h"
/**
 *malloc_checked - allocates memory and cause normal process termination
 *@b: the size of memory to allocate
 *Return: the adress on success
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
