#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print numbers to 98  in range n
 *
 * @n: range
 * Return: 0
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
		for (i = n; i <= 98; i++)
		{
			printf(i);
			if (i == 98)
				printf('\n');
			else
				printf(", ");
		}
	else
		for (i = n; i >= 98; i--)
		{
			printf(i);
			if (i == 98)
				printf('\n');
			else
				printf(", ");
		}

}
