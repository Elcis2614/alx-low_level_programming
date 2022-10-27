#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: the head of linked list
 * @idx: the index to insert to
 * @n: the data to add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *node;
	unsigned int i, size;

	if (*head == NULL || head == NULL)
		return (NULL);
	h = *head;
	size = 0;
	while (h->next != NULL)
	{
		h = h->next;
		size++;
	}
	if (idx > size)
		return (NULL);
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	h = *head;
	if (idx == 0)
	{
		node->next = h;
		*head = node;
	}
	else if (idx == size)
		add_nodeint_end(&h, n);
	else
	{
		for (i = 0; i < (idx - 1); i++)
			h = h->next;

		node->next = h->next;
		h->next = node;
	}
	return (node);
}
