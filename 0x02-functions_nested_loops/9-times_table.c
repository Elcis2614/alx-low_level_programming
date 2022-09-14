#include "main.h"
/**
 *times_table - prints the table of 9
 *
 * Return: 0
*/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = j * i;
			_putchar('0' + x);
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
