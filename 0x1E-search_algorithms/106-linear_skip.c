#include "search_algos.h"

/**
 * linear_skip -  searches for a value in a sorted skip list of integers
 * @list: pointer to the head
 * @value: the value to be searched for
 * Return: the pointer to the first ocurance of value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head, *tail;

	if (list != NULL)
	{
		head = list->express;
		tail = list;

		while (head != NULL)
		{
			printf("Value checked at index [%lu] = [%i]\n", head->index, head->n);
			if (head->n >= value)
				break;
			if (head->express != NULL)
			{
				tail = head;
				head = head->express;
			}
			else
				break;
		}
		if (head->n < value)
		{
			tail = head;
			while (head->next != NULL)
				head = head->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		tail->index, head->index);
		while (tail != NULL && tail->index <= head->index)
		{
			printf("Value checked at index [%lu] = [%i]\n", tail->index, tail->n);
			if (tail->n == value)
				return (tail);
			tail = tail->next;
		}
	}
	return (NULL);
}
