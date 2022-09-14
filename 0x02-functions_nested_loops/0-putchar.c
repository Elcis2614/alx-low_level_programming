#include "main.h"
/**
 *main - Entry point
 *
 * Return: a 0
*/
int main(void)
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
