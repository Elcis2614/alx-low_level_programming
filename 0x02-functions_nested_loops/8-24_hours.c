#include "main.h"
/**
 *jack_bauer - prints the alphabet in lower case
 *
 * Return: 0
*/
void jack_bauer(void)
{
	int i, j, s, k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (s = 0; s <= 5; s++)
			{
				for (k = 0; k <= 9; k++)
				{
					if (i == 2 && j > 3)
						return;
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + s);
					_putchar('0' + k);
					_putchar('\n');
				}
			}
		}
	}
}
