#include "lists.h"
/**
 *free_listint2 - frees linked list
 *@head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tail, *h;

	if (head != NULL && *head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			h = tail;
			tail = tail->next;
			free(h);
		}
		free(tail);
	}
	*head = NULL;
	head = NULL;
}
