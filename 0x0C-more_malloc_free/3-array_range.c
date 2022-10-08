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

	if (min > max || min == NULL || max == NULL)
		return (NULL);
	range = max - min + 1;
	c = (int *) malloc(range);
	if (c == NULL)
		return (NULL);
	for (i = min; i < range; i++)
	{
		c[i - min] = i;
	}
	return (c);
}
