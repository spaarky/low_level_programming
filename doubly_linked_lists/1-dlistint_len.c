#include "lists.h"

/**
 * dlistint_len - counts the number of elements in doubly linked list
 * @h: point to head of l;ist
 *
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t NumNodes = 0;

	while (h != NULL)
	{
		NumNodes += 1;
		h = h->next;
	}
	return (NumNodes);
}
