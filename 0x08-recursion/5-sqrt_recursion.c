#include "main.h"
/**
 *_sqrt_recursion - calculates the sqrt of a number
 *@n: the number
 *Return: the sqaure of that number or -1 ifit doesnt exist
 */
int _sqrt_recursion(int n)
{
	int x = -1;

	if (n >= 0)
	{
		x = sqrt(n);
		if (n * n != x)
			x = -1;
	}
	return (x);
}
