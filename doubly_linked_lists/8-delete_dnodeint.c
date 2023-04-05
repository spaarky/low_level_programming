#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer
 * @index: index
 *
 * Return: 1 if successful else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *delete = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	delete = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		if (*head != NULL)
			(*head)->prev = NULL;

		return (1);
	}

	while ((index != 0) && (delete->next != NULL))
	{
		index -= 1;
		delete = delete->next;
	}
	if (index == 0)
	{
		delete->prev->next = delete->next;
		if (delete->next != NULL)
			delete->next->prev = delete->prev;

		free(delete);
		return (1);
	}
	return (-1);
}
