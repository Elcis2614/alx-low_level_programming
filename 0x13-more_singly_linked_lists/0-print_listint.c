#include "lists.h"
/**
 * print_listint - prints element of a linked list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	listint_t *t;

	if (h == NULL)
		return (0);
	n = 1;
	t = (listint_t *)h;
	while (t->next != NULL)
	{
		printf("%d\n", t->n);
		n += 1;
		t = t->next;
	}
	printf("%d\n", t->n);
	return (n);
}
