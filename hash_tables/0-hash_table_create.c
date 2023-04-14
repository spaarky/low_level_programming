#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (index < size)
	{
		array[index] = NULL;
		index++;
	}

	ht->size = size;
	ht->array = array;

	return (ht);
}
