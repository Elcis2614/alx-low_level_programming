#include "main.h"
/**
 *string_toupper - convert all characters of string to Upper case
 *
 *@a: the array
 *Return: a point to string
 */
char *string_toupper(char *a)
{
	int i, n;
	char *newA;

	n = strlen(a);
	newA = malloc(n);

	for (i = 0; i < n; i++)
	{
		newA[i] = toupper(a[i]);
		a[i] = newA[i];
	}
	return (newA);
}
