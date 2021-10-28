#include "main.h"

/**
* _calloc - concat two string and return in new string
* @nmemb: number of element
* @size: size of element
* Return: ptr alloc
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = (unsigned char *)malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		buffer[i] = 0;
	return ((void *)buffer);
}

