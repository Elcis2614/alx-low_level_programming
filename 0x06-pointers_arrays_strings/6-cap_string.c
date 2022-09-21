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
		if (isalnum(a[i]) == 0)
			a[i + 1] = toupper(a[i + 1]);
	}
	return (a);
}
