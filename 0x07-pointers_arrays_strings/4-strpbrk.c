#include "main.h"
/**
 *_strpbrk - finds the first occurence
 *of any byte of accpet in s.
 *@s: the string
 *@accept: the character string
 *Return: the pointer to the first occurence of accept of null
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
