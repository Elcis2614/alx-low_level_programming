#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: the pointer to the array
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strup(str));
}
