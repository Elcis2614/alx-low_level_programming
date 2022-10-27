#include "lists.h"
/**
 * listint_len - countss element of a linked list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	listint_t *t;

	if (h == NULL)
		return (0);
	n = 1;
	t = (listint_t *)h;
	while (t->next != NULL)
	{
		n += 1;
		t = t->next;
	}
	return (n);
}
