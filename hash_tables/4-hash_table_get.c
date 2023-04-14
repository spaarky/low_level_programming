#include "hash_tables.h"

/**
 * hash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 *
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[index];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	else
		return (tmp->value);
}
