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
 * add_node - add node to beginning of the list
 * @head: linked list
 * @str: data for the new node
 *
 * Return: adress of new elements or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL) /*validating input*/
		return (NULL);

	if (strdup(str) == NULL) /*check malloc error*/
		return (NULL);

	newnode = malloc(sizeof(list_t)); /*malloc for the new node  created*/
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str); /*Set newnode values*/
	newnode->len = _strlen(str);

	if (head == NULL) /*Set first POinting of newnode*/
		newnode->next = NULL;

	else
		newnode->next = *head;

	*head = newnode; /*Set heqd to point newnode*/

	return (newnode);
}
