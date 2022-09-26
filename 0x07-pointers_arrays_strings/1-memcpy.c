#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: the destination
 *@src: the source
 *@n: the number of bytes
 *Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
