#include "main.h"

/**
 *largest_number - return the largest of three numbers
 *@a: number 1
 *@b: number 2
 *@c: number 3
 * Return: the largest
 */

int largest_number(int a, int b, int c)
{
	int larger;

	if (a >= b && a >= c)
		larger = a;
	else if (b >= a && b >= c)
		larger = b;
	else
		larger = c;
	return (larger);


}
