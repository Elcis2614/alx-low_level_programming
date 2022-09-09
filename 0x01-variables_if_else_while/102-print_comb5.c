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
		for (j = 48; j <= 58; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
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
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
