#include "main.h"

/**
* create_array - set byte on array
* @size: size of array
* @c: bytes copy on array 
* Return: new array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(sizeof(char) * size);
	if (!array && size == 0)
		return (NULL);
	
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

