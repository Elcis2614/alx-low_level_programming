#include "main.h"
/**
 * create_array - creates of chars and initialize it
 * @size: the size of the array
 * @c: the character to fill the array with
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (int) size; i++)
	{
		array[i] = c;
	}
	return (array);
}
