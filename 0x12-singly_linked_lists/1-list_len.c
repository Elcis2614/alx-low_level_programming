#include "lists.h"
/**
 * list_len - countss element of a linked list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;
	list_t *t;

	if (h == NULL)
		return (0);
	n = 1;
	t = (list_t *)h;
	while (t->next != NULL)
	{
		n += 1;
		t = t->next;
	}
	return (n);
}
