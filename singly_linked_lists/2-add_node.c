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

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /*create a new node*/

	if (str == NULL) /*validating input*/
		return (NULL);

	if (strdup(str) == NULL) /*check malloc error*/
		return (NULL);

	new_node = malloc(sizeof(list_t)); /*malloc for the new node  created*/
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /*Set new_node values*/
	new_node->len = _strlen(str);

	if (head == NULL) /*Set first POinting of new_node*/
		new_node->next = NULL;

	else
		new_node->next = *head;

	*head = new_node; /*Set heqd to point new_node*/

	return (new_node);
}
