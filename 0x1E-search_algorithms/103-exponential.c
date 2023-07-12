#include "search_algos.h"
/**
 *exponential_search - searches value in a sorted array
 *using the exponential algorithm
 *@array: the pointer to the first element of the array
 *@size: the size of the array
 *@value: the value to be searched for
 *Return: the index of the value found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t expo, high;
	int tmp;

	if (array != NULL && (int)size != 0)
	{
		expo = 1;
		while (expo < size && array[expo] < value)
		{
			printf("Value checked array[%lu] = [%i]\n", expo, array[expo]);
			expo *= 2;
		}
		if (expo > size - 1)
			high = size - 1;
		else
			high = expo;
		expo /= 2;
		printf("Value found between indexes [%lu] and [%lu]\n", expo, high);
		size = high - expo + 1;
		tmp = binary_search(array + (int)expo, size, value);
		if (tmp != -1)
			return ((int)(tmp + expo));
	}
	return (-1);
}
/**
 *binary_search - searches value in a sorted array using the Binary search
 *@array: the pointer to the first element of the array
 *@size: the size of the array
 *@value: the value to be searched for
 *Return: the index of the value found
*/
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high;

	if (array != NULL && size > 0)
	{
		low = 0;
		high = size - 1;
		mid = (size - 1) / 2;

		while (low <= high)
		{
			printArray(array, high, low);
			if (value == array[mid])
				return (mid);

			else if (value < array[mid])
				high = mid - 1;

			else
				low = mid + 1;
			mid = (high + low) / 2;
		}
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
