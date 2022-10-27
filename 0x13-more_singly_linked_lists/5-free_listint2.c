#include "lists.h"
/**
 *free_listint2 - frees linked list
 *@head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tail;

	if (head != NULL && *head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			*head = tail;
			tail = tail->next;
			free(*head);
		}
		free(tail);
	}
	*head = NULL;
}


