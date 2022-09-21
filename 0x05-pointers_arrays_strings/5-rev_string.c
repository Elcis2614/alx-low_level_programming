#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *rev_string -  prints a string to the stout in reverse order
 *
 * @s: the string to be printed
 * source : https://stackoverflow.com/a/72097452
 */
void rev_string(char *s)
{
	int n, i;
	char t;

	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
