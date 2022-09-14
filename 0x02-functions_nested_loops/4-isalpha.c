#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks if a  character is alpha
 *
 *@c: the character to be tested
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
