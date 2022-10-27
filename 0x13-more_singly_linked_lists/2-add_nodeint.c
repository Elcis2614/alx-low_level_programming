#include "lists.h"
/**
 * add_nodeint - adds node at the begining of a list
 * @head: the head of the list
 * @n: the str data
 * Return: the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
