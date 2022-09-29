#include "main.h"
/**
 *is_prime_number - chekcs if the number is prime
 *@n: the number
 *Return: 1 if yes and 0 other wise
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else
		return (1);
}
