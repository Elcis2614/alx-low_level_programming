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

	x = strlen(s1);
	y = strlen(s2);
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		s[i] = s1[i];
	for (i = x; i < (x + y); i++)
		s[i] = s2[i - x];
	return (s);
}
