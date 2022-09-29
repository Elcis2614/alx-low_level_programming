#include "main.h"
/**
 *_pow_recursion - calculate the power
 *@x: base number power
 *@y: the power
 *Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0 || x == 1)
		return (x);
	return (x * factorial(x, (y - 1)));
}
