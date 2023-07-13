#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: the pointer to the  head of the list to search in
 * @size: the number of nodes
 * @value: the key being search for
 * Return: a pointer to the first node where value is located
 * or NULL otherwise
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head, *tail;
	size_t step, counter;

	if (list != NULL && size > 0)
	{
		step = (size_t)(sqrt(size));
		head = list;
		tail = list;
		counter = step;

		while (counter > 0 && head->next != NULL)
		{
			head = head->next;
			counter--;
		}

		while (head != NULL)
		{
			printf("Value checked at index [%lu] = [%i]\n", head->index, head->n);
			if (head->n > value || head->next == NULL)
				break;
			counter = step;
			tail = head;
			while (counter > 0 && head->next != NULL)
			{
				head = head->next;
				counter--;
			}
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		tail->index, head->index);
		while (tail != NULL)
		{
			printf("Value checked at index [%lu] = [%i]\n", tail->index, tail->n);
			if (tail->n == value)
				return (tail);
			tail = tail->next;
		}
	}
	return (NULL);
}
