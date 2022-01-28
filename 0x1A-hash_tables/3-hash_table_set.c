#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - add new element in hash table
* @ht: hash table
* @key: key of node
* @value: value of node
* Return: 1 if it succeeded, 0 otherwises
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	if (key == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
