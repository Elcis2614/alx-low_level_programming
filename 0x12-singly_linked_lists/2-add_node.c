#include "lists.h"
/**
 * add_node - adds node at the begining of a list
 * @head: the head of the list
 * @str: the str data
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
