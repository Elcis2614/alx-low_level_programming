#include "main.h"
/**
 *print_rev -  prints a string to the stout in reverse order
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int n, i, t;

	n = _strlen(s);
	for (i = 0 ; i < n / 2; i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
	_puts(s);
}
