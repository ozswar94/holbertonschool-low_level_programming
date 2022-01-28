#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - get node by key
* @ht: hash table
* @key: key of node of hash table
* Return: value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item == NULL)
		return (NULL);

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
