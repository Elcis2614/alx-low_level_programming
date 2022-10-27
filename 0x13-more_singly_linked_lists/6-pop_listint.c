#include "lists.h"
/**
 *pop_listint - pops the head
 *@head: head of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *tail;
	int x;

	tail = *head;
	if (*head != NULL)
	{
		x = tail->n;
		if (tail->next == NULL)
			free(tail);
		else
		{
			*head = tail->next;
			free(tail);
		}
		return (x);
	}
	else
		return (0);
}


