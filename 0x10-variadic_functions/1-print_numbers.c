#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print parameters
 *@separator: string of separation
 *@n: number of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
		{
			printf("%d", va_arg(ap, unsigned int));
			continue;
		}
		printf("%d%s", va_arg(ap, unsigned int), separator);
	}
	printf("\n");
	va_end(ap);
}
