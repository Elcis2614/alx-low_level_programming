#include "search_algos.h"
#include <math.h>
/*
 *jump_search -  searches for a value in a sorted array of integers using the Jump search algorithm
 *@array: the pointer to the array being searched in
 *@value: the key being search for
*/

int jump_search(int *array, size_t size, int value)
{
	int frontS , backS, jump_step;
	
	if (array != NULL && size > 0)
	{
		
		jump_step = (int) sqrt(size);
		frontS = jump_step;
		backS = 0;
		
		while (array[backS] < value and frontS < size - 1){
			printf("Value checked array[%i] = [%i]\n", backS, array[backS]);
			frontS += jump_step;
			backS += jump_step;
		}
		if (array[backs] >= value){
			backS -= jump_search;
			frontS -= jump_search;
		}
		else
			frontS = size - 1;
		
		printf("Value found between indexes [%i] and [%i]", backS, frontS); 
		return (linear_search(array + backS, frontS - backS, value));
	}
	return (-1);
}	
