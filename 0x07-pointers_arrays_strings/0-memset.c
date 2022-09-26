#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: the pointer
 *@b: the character
 *@n: the int
 *Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
