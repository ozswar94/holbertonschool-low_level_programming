#include "main.h"

/**
* array_range - range fonction like python
* @min: start
* @max: end
* Return: a tab of numbers which start at min and end with max
*/

int *array_range(int min, int max)
{
	int size;
	int *buffer;

	if (min > max)
		return (NULL);

	for (size = 0; size + min <= max; size++)
	;
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (NULL);

	for (size = 0; size + min <= max; size++)
		buffer[size] = size + min;

	return (buffer);
}

