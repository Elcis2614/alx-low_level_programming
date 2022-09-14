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
	int value;

	value = c % 10;
	_putchar(value);
	return (value);
}
