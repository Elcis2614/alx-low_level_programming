#include "main.h"
/**
 *malloc_checked - allocates memory and cause normal process termination
 *@b: the int
 *Return: the malloc
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(sizeof(b) == NULL)
	{
		exit(98);
	}
	else
		return (malloc(sizeof(b)));
}
