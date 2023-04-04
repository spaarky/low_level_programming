#include "lists.h"

/**
 * free_dlistint - free a doubly linked list with only data
 * @head: points to head of list
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
