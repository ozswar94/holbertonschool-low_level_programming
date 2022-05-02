#include "search_algos.h"

/**
* linear_search - search a value in array linearly
* @array: integer array
* @size: size of array
* @value: value search
* Return: if the value is found return index index, else -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
