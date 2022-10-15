#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - print parameters
 *@separator: string of separation
 *@n: number of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n == 0)
		return (0);
	va_start(ap, n);
	va_arg(ap, unsigned int);
	if (separator == NULL)
		s = "";
	else
		s = separator;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(ap, unsigned int));
			continue;
		}
		printf("%d%s", va_arg(ap, unsigned int), s);
	}
	printf('\n');
	va_end(ap);
}
