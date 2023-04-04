#include "lists.h"

/**
 * dlistint_len -
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
