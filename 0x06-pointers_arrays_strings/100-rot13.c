#include "main.h"
/**
 *rot13 - encodes using rot13
 *
 *@a: the array
 *Return: a point to string
 */
char *rot13(char *a)
{
	int i, n, j;
	char l[5] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g',
		'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};

	char c[5] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't',
		'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};

	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == l[j])
				a[i] = c[j];
		}
	}
	return (a);
}
