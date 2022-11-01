#include "main.h"
/**
 * binary_to_uint - convert bin to uint
 * @s: the bin word
 * Return: the unint
 */
unsigned int binary_to_uint(const char *s)
{
	unsigned int value;

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
	while (*s)
	{
		value += (*b - '0') * pow(2, n);
		b++;
	}
	return (value);
}
