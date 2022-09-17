#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints numbers 0-14 ten times
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			if (j >= 10)
				_putchar ('0' + i / 10);
			_putchar ('0' + i % 10);
		}
	}
	_putchar('\n');
}
