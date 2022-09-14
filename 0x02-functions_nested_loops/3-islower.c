#include "main.h"
/**
 *_islower - checks if a  character is lower
 *
 *@c: the character to be tested
 *
 * Return: 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
