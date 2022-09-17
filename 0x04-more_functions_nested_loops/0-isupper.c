#include <ctype.h>
/**
 *_isupper - check it a character is upper case
 *@c: the character to be tested
 *Return: 1 if true , 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
