#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *print_rev -  prints a string to the stout in reverse order
 *
 * @s: the string to be printed
 * source : https://stackoverflow.com/a/72097452
 */
void print_rev(char *s)
{
	size_t n;
	char *c;

	n = strlen(s);
	c = malloc(n + 1);
	if (c != NULL)
	{
		c += n;
		*c = '\0';
		while (*s)
		{
			*--c = *s++;
		}
	}
	puts(c);
}
