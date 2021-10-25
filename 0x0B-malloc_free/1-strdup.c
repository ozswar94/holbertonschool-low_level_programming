#include "main.h"
#include <stdio.h>
/**
* _strdup - create a new string and copy str in the new string
* @str: string
* Return: new string
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *buffer;

	for (size = 0; str[size] != '\0' ; size++)
	;
	buffer = (char *)malloc(sizeof(char) * size);
	if (!buffer || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];
	return (buffer);
}

