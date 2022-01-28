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
	hash_node_t *curr = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}

	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
