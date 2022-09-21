#include "main.h"
/**
 *_strncat - concatenate n bytes from src to dest
 *
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes to be taken from dest
 *Return: returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
