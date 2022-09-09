#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		/*ignores e and q */
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
