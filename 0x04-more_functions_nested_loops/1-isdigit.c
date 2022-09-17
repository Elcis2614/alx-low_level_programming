#include <ctype.h>
/**
 *_isdigit - check it a character is upper case
 *@c: the character to be tested
 *Return: 1 if true , 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
