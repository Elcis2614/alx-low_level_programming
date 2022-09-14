#include "main.h"
/**
 *firstfunction - Entry point
 *
 * Return: a 0
*/
int firstprint(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');
	return (0);
}
