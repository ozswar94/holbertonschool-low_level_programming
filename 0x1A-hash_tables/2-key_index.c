#include "hash_tables.h"

/**
* key_index - get index of hash tables
* @key: key of node
* @size: size of hash table
* Return: index of hashe node
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index =	hash_djb2(key);
	return (index % size);
}
