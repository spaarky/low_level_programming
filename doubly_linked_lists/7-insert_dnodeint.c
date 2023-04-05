#include "lists.h"

/**
 *
*/

dlistint_t *insertnode(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}

/**
 *
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	tmp = *h;

	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;

		if (idx == 0)
			return (insertnode(tmp, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
