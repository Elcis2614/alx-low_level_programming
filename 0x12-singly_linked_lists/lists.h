#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct list_t list_t;
/**
 * struct list_t - linked list
 * @str: string part
 * @len: the lenght of the string
 * @next: address of the next element
 */
struct list_t
{
	char *str;
	int len;
	list_t *next;
};
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif

