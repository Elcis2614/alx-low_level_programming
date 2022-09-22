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
		if (isalnum(a[i]) == 0 && a[i] != '\t')
			a[i + 1] = toupper(a[i + 1]);
		else if(a[i] == '\t')
			a[i] = ' ';
	}
	if (isalnum(a[n - 1]) != 0 && isalnum(a[n - 2]))
		a[n - 1] = toupper(a[n - 1]);
	return (a);
}
