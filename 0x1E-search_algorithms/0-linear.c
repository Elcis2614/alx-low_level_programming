#include "search_algos.h"
/*
 *linear_search - searches for a value in an array of integers using the Linear search algorithm
 *@array: the pointer to array containing the values
 *@size: the size of the array
 *@value: the value to be searched
 *Return: the index of the @value in the array or -1 otherwise
*/
int linear_search(int *array, size_t size, int value){
	int i;
	
	if (array != NULL && size > 0)
		for (i = 0 ; i < size; i ++){
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
