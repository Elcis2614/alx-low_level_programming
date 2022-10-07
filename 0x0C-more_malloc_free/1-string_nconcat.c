#include "main.h"
/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: total number of bits from s2
 * Return: the pointer to the complety string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, y, i;
	char *s;

	if (s1 == NULL && s2 == NULL)
		x = y = 0;
	else if (s2 == NULL)
	{
		y = 0;
		x = strlen(s1);
	}
	else if (s1 == NULL)
	{
		x = 0;
		if ((size_t) n >= strlen(s2))
			y = strlen(s2);
		else
			y = n;
	}
	else
	{
		x = strlen(s1);
		if ((size_t) n >=  strlen(s2))
			y = strlen(s2);
		else
			y = n;
	}
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for(i = 0; i < x && x != 0; i++)
		s[i] = s1[i];
	while (i < (x + y) && y != 0)
	{
		s[i] = s2[i - x];
		i++;
	}
	s[i] = '\0';
	return (s);
}
