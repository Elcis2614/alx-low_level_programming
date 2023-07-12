#include "search_algos.h"
/**
 * interpolation_search - searches value in sorted array of integers
 * using Interpolation search
 * @array: the pointer to the array being searched in
 * @size: the (int)size of the array
 * @value: the key being search for
 * Return: the index of value if found, or -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array != NULL && size > 0)
	{
		low = 0;
		high = size - 1;
		pos = position(array, high, low, value);

		if (value > array[high])
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		while (low <= high)
		{
			printf("Value checked array[%i] = [%i]\n", (int)pos, array[pos]);
			if (value == array[pos])
				return ((int)(pos));

			else if (value < array[pos])
				high = pos - 1;
			else
				low = pos + 1;
			pos = position(array, high, low, value);
		}
	}
	return (-1);
}
/**
 * position - computes the probe position
 * @high : the high index
 * @low: the low index
 * @value : the value
 * @array : array to of the indexes
 * Return: the probe position
 */
size_t position(int *array, size_t high, size_t low, int value)
{
	return (low + (((double)(high - low) / (array[high]
		- array[low])) * (value - array[low])));
}
