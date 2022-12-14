#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - compute the sum of it's argument
 * @n: number of arguments
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += (int) va_arg(ap, const unsigned int);
	va_end(ap);
	return (sum);
}
