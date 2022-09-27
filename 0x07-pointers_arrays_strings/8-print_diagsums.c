#include "main.h"
/**
 *print_diagsums - prints the two diagonals
 *@a: the matrice
 *@size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, d1, d2, j;

	d1 = 0;
	d2 = 0;
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][j - i];
		j--;
	}
	_putchar(d1 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(d2 + '0');
}
