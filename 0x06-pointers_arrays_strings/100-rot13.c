#include "main.h"
/**
 *rot13 - encodes using rot13
 *
 *@a: the array
 *Return: a point to string
 */
char *rot13(char *a)
{
	int i, n;
	char l[26] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g',
		'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};

	char c[26] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't',
		'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};

	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		int k = 0;

		while (k < 26 && a[i] != l[k] && isalpha(a[i]) != 0)
			++k;
		while (k >= 26 && a[i] != c[k - 26] && isalpha(a[i]) != 0 && k < 52)
			++k;
		if (k < 26 && isalpha(a[i]) != 0)
		{
			a[i] = c[k];
			continue;
		}
		else 
			while (k !=0)
			{
				a[i] = l[k - 26];
				break;
			}
	}
	return (a);
}
