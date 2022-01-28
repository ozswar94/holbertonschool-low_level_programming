#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - delete all item in hash table
* @ht: hash table
*
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;

			if (tmp->key != NULL)
				free(tmp->key);
			if (tmp->value != NULL)
				free(tmp->value);
			free(tmp);
		}
		free(node);
	}
	free(ht->array);
	free(ht);
}
