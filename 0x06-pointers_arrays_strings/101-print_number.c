#include "main.h"
/**
 *print_number - print numbers
 *
 *@n: number to print
 */
void print_number(int n)
{
	int x, k;

	if (n < 0)
	{
		_putchar('-');
		x = (-1) * n;
	}
	else
		x = n;
	k = 10;
	while (x / k != 0)
	{
		k = k * 10;
	}
	k = k / 10;
	while (k != 1)
	{
		int t = x / k;

		_putchar(t + '0');
		x = x  - (t * K);
		k = k / 10;
	}
	putchar(x % 10 + '0');
}
