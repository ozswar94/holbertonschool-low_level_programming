#include "search_algos.h"
#include <math.h>

/**
* jump_search - search a value by jump
* @array: integer array
* @size: size of array
* @value: value search
* Return: if the value is found return index index, else -1
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0, j, step = 0;

	if (!array || !size)
		return (-1);

	while (step < size && array[step] < value)
	{
		i = step;
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		step += sqrt(size);
	}
	printf("Value found between indexes [%u] and [%u]\n", i, step);
	for (j = i; j <= step && j < size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
