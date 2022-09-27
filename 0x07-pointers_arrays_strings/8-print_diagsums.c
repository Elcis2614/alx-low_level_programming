#include "main.h"
/**
 *print_diagsums - print the sums of daigonals
 *@a: the array
 *@size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, *p, s1, s2;

	p = &a[0];
	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		int t = *(p + ((i * size) + i));

		s1 += t;
		s2 += *(p + ((i * size) + (size - i - 1)));
	}
	printf("%d, %d\n", s1, s2);
}
