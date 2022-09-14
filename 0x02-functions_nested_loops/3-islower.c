#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if a  character is lower
 *
 *@c: the character to be tested
 *
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
