#include "main.h"
/**
 *_print_rev_recursion - print string in reverse
 *@s: the string
 */
void _print_rev_recursion(char *s)
{
	size_t t = strlen(s);
	char *x;

	if (t == 0)
		return;
	_putchar(s[t - 1]);
	x = malloc(t - 1);
	memcpy(x, s, t - 1);
	_print_rev_recursion(x);
}