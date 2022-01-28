#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - create new hash table
* @size: size of hash table
* Return: new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;

	tb = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);

	tb->size = size;
	tb->array = calloc((size_t)size, sizeof(hash_node_t *));
	return (tb);
}
