#include "main.h"

/**
* _realloc - re-alloc a ptr
* @ptr: pointer reallocated
* @old_size: old size of ptr
* @new_size: new size of ptr
* Return: ptr re-alloc
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned char *buffer;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
}

