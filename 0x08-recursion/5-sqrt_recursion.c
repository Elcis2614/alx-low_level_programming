#include "main.h"
/**
 *s - finds the square of a number of the boundaries
 *@low: lower boundery
 *@high: higher
 *@N: the number
 *Return: the highest root
 */
int s(int low, int high, int N)
{
	/* If the range is still valid*/
	if (low <= high)
	{
		/* Find the mid-value of the range*/
		long int mid = (low + high) / 2;

		if ((mid * mid <= N) && ((mid + 1) * (mid + 1) > N))
		{
			return (mid);
		}
		/* Condition to check if left search space is useless*/
		else if (mid * mid < N)
		{
			return (s(mid + 1, high, N));
		}
		else
		{
			return (s(low, mid - 1, N));
		}
	}
	return (low);
}
/**
 *_sqrt_recursion - calculates the sqrt of a number
 *@n: the number
 *Return: the sqaure of that number or -1 ifit doesnt exist
 */
int _sqrt_recursion(int n)
{
	int x = -1;

	if (n >= 0)
	{
		int t = s(0, n, n);

		if (t * t == n)
			x = t;
	}
	return (x);
}
