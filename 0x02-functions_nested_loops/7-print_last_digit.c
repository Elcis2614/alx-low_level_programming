#include "main.h"
/**
 *print_last_digit - prints the alphabet in lower case
 *
 *@c: the number
 *
 * Return: last digit of a number
*/
int print_last_digit(int c)
{
	int value,x;

	value = c % 10;
	x = value + '0';
	_putchar(x);
	return (value);
}
