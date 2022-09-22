#include "main.h"
/**
 *leet - encodes
 *
 *@a: the array
 *Return: a point to string
 */
char *leet(char *a)
{
	int i, n, j;
	char l[5] = {'a', 'e', 'o', 't', 'l'};

	char c[5] = {'4', '3', '0', '7', '1'};

	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (tolower(a[i]) == l[j])
				a[i] = c[j];
		}
	}
	return (a);
}
