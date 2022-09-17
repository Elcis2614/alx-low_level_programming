#include <stdio.h>
#include "main.h"
/**
 *print_line - prints line
 *@n: deffines the length of the line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
