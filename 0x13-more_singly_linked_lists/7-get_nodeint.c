#include "lists.h"
/**
 *get_nodeint-at_index - returns the nth node;
 *@head: head of the list
 *@index: the index of the element
 *Return: the index element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tail;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tail = head;
	for (i = 0; i < index; i++)
	{
		if (tail->next == NULL)
			return (tail);
		else
			tail = tail->next;
	}
	return (tail);
}
