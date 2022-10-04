#include "main.h"
/**
 * str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the pointer to the complety string
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, i;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s2 == NULL)
	{
		y = 0;
		x = strlen(s1);
	}
	else if (s1 == NULL)
	{
		x = 0;
		y = strlen(s2);
	}
	else
	{
		x = strlen(s1);
		y = strlen(s2);
	}
	s = malloc(sizeof(char) * (x + y + 1));
	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < x && x != 0)
		s[i] = s1[i];
	while (i < (x + y) && y != 0)
		s[i] = s2[i - x];
	return (s);
}
