#include <stdlib.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	/*print digits*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			l = j + 1;
			for (k = i; k <= 57; k++)
			{
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56)
					{
						putchar(44);
						putchar(' ');
					}
					l++;
				}
				l = 48;
			}
			if (i == 57 && j == 57)
				return (0);
		}
	}
	putchar('\n');
	return (0);
}
