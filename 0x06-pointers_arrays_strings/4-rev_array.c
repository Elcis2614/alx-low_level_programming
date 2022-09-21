#include "main.h"
/**
 *reverse_array - reverse array of strings
 *
 * @n: size of the array
 * @a: the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int t = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
