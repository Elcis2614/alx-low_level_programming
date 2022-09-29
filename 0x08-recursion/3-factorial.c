#include "main.h"
/**
 *factorial - return the lenght of the string
 *@n: the pointer
 *Return: the length
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
