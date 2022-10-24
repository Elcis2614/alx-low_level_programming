#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_t - linked list
 * @str: string part
 * @len: lenght of the string
 * @next: address of the next element
 */
typedef struct list_t list_t;
struct list_t
{
	char *str;
	int len;
	list_t *next;
};
int _putchar(char c);
size_t print_list(const list_t *h);
#endif

