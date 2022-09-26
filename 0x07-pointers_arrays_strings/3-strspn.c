#include "main.h"
/**
 *_strspn - finds the number of bytes in the initial
 *segment of prefix substring
 *@s: the string
 *@accept: the character
 *Return: the pointer to the first occurence of c of null
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
