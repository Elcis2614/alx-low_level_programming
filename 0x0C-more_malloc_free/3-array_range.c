#include "main.h"
/**
 *array_range - creates an array of numbers
 *@min: first number
 *@max: last number
 *Return: a pointer to that array
 */
int *array_range(int min, int max)
{
	int i, range;
	int *c;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	c = malloc((size_t)range * sizeof(min));
	if (c == NULL)
		return (NULL);
	for (i = min; i < (max + 1); i++)
	{
		c[i - min] = i;
	}
	return (c);
}
