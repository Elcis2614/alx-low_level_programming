#include "main.h"
/**
 *leet - encodes
 *
 *@a: the array
 *Return: a point to string
 */
char *leet(char *a)
{
	int i, n;

	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		else if (tolower(a[i]) == 'e')
			a[i] = '3';
		else if (tolower(a[i]) == 'o')
			a[i] = '0';
		else if (tolower(a[i]) == 't')
			a[i] = '7';
		else if (tolower(a[i]) == 'l')
			a[i] = '1';
		else
			continue;
	}
	return (a);
}
