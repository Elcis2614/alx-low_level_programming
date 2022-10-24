#include "lists.h"
/**
 * add_node_end - adds node at the end of a list
 * @head: the head of the list
 * @str: the str data
 * Return: the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
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
