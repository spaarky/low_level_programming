#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - add node to the end of linked list
 * @head: linked list
 * @str: data for new node
 *
 * Return: adress of new elements or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode, *tmp;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	NewNode = malloc(sizeof(str));

	if (NewNode == NULL)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = _strlen(str);
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;

	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = NewNode;
	}

	return (NewNode);
}
