#include <stdio.h>
#include "main.h"
/**
 *print_triangle - prints the diagonal`
 *@size: deffines the length of the line
 */
void print_triangle(int size)
{
	int i, j, x;

	x = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
		while (size > 0)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (i = 0; i < x; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
			x++;
		};
}
