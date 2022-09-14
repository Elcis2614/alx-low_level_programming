#include "main.h"
#include <ctype.h>
/**
 *print_sign - checks and print the sign of number
 *
 *@n: the number to be tested
 *Return: 0,1,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
