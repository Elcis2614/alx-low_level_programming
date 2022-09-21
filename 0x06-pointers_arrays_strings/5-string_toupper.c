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

	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
