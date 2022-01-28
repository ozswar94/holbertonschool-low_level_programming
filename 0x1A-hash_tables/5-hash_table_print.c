#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_print - print all table
* @ht: hash table
*
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int len = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp = tmp->next;
			len++;
		}
	}
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (len - 1)
				printf("'%s': '%s', ", tmp->key, tmp->value);
			else
				printf("'%s': '%s'", tmp->key, tmp->value);

			tmp = tmp->next;
			len--;
		}
	}
	putchar('}');
	putchar('\n');
}
