#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - prints the diagonal`
 *@n: deffines the length of the line
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
