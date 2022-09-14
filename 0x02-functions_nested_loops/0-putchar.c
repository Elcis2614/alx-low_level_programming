#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: a 0
*/
int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		putchar(*x);
		x++;
	}
	putchar('\n');
	return (0);
}
