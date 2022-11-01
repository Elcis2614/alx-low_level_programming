#include "main.h"
#include <math.h>
/**
 * binary_to_uint - convert bin to uint
 * @s: the bin word
 * Return: the unint
 */
unsigned int binary_to_uint(const char *s)
{
	unsigned int value, n;

	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s != '0' && *s != '1')
			return (0);
		s++;
	}
	--s;
	value = 0;
	n = 1;
	while (*s)
	{
		value += (*s - '0') * n;
		n *= 2;
		s--;
	}
	return (value);
}
