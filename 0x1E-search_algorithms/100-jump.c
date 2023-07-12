#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches value in sorted array of int using the Jump search
 * @array: the pointer to the array being searched in
 * @size: the (int)size of the array
 * @value: the key being search for
 * Return: the index of value if found, or -1 otherwise
*/

int jump_search(int *array, size_t size, int value)
{
	int frontS, backS, jump_step, index;

	if (array != NULL && (int)size > 0)
	{

		jump_step = (int)sqrt(size);
		frontS = jump_step;
		backS = 0;

		while (backS <= (int)(size - 1))
		{
			if (array[backS] >= value)
				break;
			printf("Value checked array[%i] = [%i]\n", backS, array[backS]);
			backS += jump_step;
		}
		frontS = backS;
		backS -= jump_step;
		if (backS > (int)(size - 1))
			return (-1);

		printf("Value found between indexes [%i] and [%i]\n", backS, frontS);

		if (frontS > (int)(size - 1))
			frontS = (int)(size - 1);

		for (index = backS; index <= frontS; index++)
		{
			printf("Value checked array[%i] = [%i]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
