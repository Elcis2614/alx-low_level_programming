#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - print parameters
 *@separator: string of separation
 *@n: number of integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
		{
			printf("%s", va_arg(ap, char *));
			continue;
		}
		printf("%s%s", va_arg(ap, char *), separator);
	}
	printf("\n");
	va_end(ap);
}
