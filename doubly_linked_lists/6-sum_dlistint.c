#include "lists.h"

/**
 * sum_dlistint - get sum of data of a doubly linked list
 * @head: pointer to head of the list
 *
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
