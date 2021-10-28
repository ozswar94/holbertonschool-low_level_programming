#include "main.h"

/**
* malloc_checked - create a new space memory
* @b: bytes allocated
* Return: return address of memory space
*/

void *malloc_checked(unsigned int b)
{
	unsigned char *bytes_alloc;

	bytes_alloc = (unsigned char *)malloc(b);
	if (bytes_alloc == NULL)
		exit(98);
	return ((void *)bytes_alloc);
}

