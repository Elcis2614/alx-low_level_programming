#include "lists.h"
/**
 *sum_listint - returns the nth node;
 *@head: head of the list
 *Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *tail;
	int i;

	i = 0;
	tail = head;
	while (tail != NULL)
	{
		i += tail->n;
		tail = tail->next;
	}
	return (i);
}
