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
	a[0] = toupper(a[0]);
	for (i = 1; i < n; i++)
	{
		if (isalnum(a[i]) == 0 && a[i + 1] != '\0')
			a[i + 1] = isupper(a[i + 1]);
	}
	return (a);
}
