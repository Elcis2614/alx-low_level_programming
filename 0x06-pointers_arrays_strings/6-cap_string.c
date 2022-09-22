#include "main.h"
/**
 *cap_string - capitaize all words
 *
 *@a: the array
 *Return: a point to string
 */
char *cap_string(char *a)
{
	int i, n;

	n = strlen(a);
	a[0] = toupper(a[0]);
	for (i = 1; i < n - 1; i++)
	{
		if (isalnum(a[i - 1]) == 0 && isalpha(a[i + 1]) != 0)
			a[i] = toupper(a[i]);
	}
	return (a);
}
