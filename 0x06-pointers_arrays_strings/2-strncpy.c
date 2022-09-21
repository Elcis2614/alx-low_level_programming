#include "main.h"
/**
 *_strncpy - copy n bytes from src to dest
 *
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes to be taken from dest
 *Return: returns a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
