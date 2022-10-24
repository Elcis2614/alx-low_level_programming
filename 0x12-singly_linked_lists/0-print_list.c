#include "lists.h"
/**
 * print_list - prints element of a linked list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;
	list_t *t;

	if (h == NULL)
		return (0);
	n = 1;
	t = (list_t *)h;
	while (t->next != NULL)
	{
		if (t->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", t->len, t->str);
		n += 1;
		t = t->next;
	}
	printf("[%d] %s\n", t->len, t->str);
	return (n);
}
