#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of a list
 * @head: the head of the list
 * @n: the str data
 * Return: the pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = tail = node;
		return (tail);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = node;
	tail = node;
	return (tail);
}
