#include "main.h"
/**
 *alloc_grid -  initialise a 2D array
 *@width: the width of the array
 *@height: the height
 *Return: the pointer to the initialized aray array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
}
