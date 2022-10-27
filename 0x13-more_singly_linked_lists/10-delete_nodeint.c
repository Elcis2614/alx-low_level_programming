#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: the head of linked list
 * @idx: the index to insert to
 * Return: -1 if failed, 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *h;
	unsigned int i, size;

	if (*head == NULL || head == NULL)
		return (-1);
	h = *head;
	size = 0;
	while (h->next != NULL)
	{
		h = h->next;
		size++;
	}
	if (idx > size)
		return (-1);
	h = *head;
	if (idx == 0)
	{
		*head = h->next;
		free(h);
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
			h = h->next;
		if (idx == size)
		{
			free(h->next);
			h->next = NULL;
		}
		else
		{
			h->next = h->next->next;
			free(h->next);
		}
	}
	return (1);
}
