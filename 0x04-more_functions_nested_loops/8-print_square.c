#include <stdio.h>
#include "main.h"
/**
 *print_square - prints the diagonal`
 *@size: deffines the length of the line
 */
void print_square(int size)
{
	int i, j, n;

	n = size;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		};
}
