#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printArray(int *array, int high, int low);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t position(int *array, size_t high, size_t low, int value);
int exponential_search(int *array, size_t size, int value);
#endif
