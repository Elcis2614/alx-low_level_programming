#include "search_algos.h"

/**
 * recurse - alternate throuh the array recursively to find the value
 * @array: the array being search in
 * @high: the front reference
 * @low : the back reference
 * @value: the value to search for
 * Return: the index of the value or -1 otherwise
 */
int recurse(int *array, int high, int low, int value)
{
	int mid;

	if (low > high)
		return (-1);
	printArray(array, high, low);
	mid = (high + low) / 2;
	if (array[mid] == value && (high - low) == 1)
		return (mid);
	else if (array[mid] < value)
		return (recurse(array, high, mid + 1, value));
	else if (array[mid] >= value)
		return (recurse(array, mid, low, value));
	else
		return (-1);
}
/**
 *advanced_binary - searches value in a sorted array using the Binary search
 *@array: the pointer to the first element of the array
 *@size: the size of the array
 *@value: the value to be searched for
 *Return: the index of the value found
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL && size > 0)
	{
		return (recurse(array, (int)(size - 1), 0, value));
	}
	return (-1);
}

/**
 *printArray - prints an array based on the low and high indexes
 *@array: the array to be printed
 *@high: the higher index
 *@low: the lower index
*/
void printArray(int *array, int high, int low)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[high]);
}
