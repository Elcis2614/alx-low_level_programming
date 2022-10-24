#include "lists.h"
/**
 *free_list - frees linked list
 *@head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tail;

	if(head->next == NULL)
		exit(0);
	tail = head;
	while (tail->next != NULL)
	{
		free(tail->str);
		tail->str = NULL;
		head = tail;
		tail = tail->next;
		free(head);
	}
	free(tail->str);
	free(tail);
}


