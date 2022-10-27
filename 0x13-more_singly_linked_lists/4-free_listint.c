#include "lists.h"
/**
 *free_listint - frees linked list
 *@head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tail;

	if (head != NULL)
	{
		tail = head;
		while (tail->next != NULL)
		{
			head = tail;
			tail = tail->next;
			free(head);
		}
		free(tail);
	}
}


