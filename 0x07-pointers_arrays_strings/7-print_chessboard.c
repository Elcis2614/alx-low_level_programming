#include "main.h"
/**
 *print_chessboard : ...
 *@b: the 2d table
 */
void print_chessboard(char b(*a)[8])
{
	int i, j;

	int n = strlen(a);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(b[i][j]);
		}
		_putchar('\n');
	}
}
