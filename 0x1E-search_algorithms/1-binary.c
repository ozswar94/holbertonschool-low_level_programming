#include "search_algos.h"

/**
* binary_search - search a value by the middle
* @array: integer array
* @size: size of array
* @value: value search
* Return: if the value is found return index index, else -1
*/
int binary_search(int *array, size_t size, int value)
{
	int i;
	int mid, high = size - 1, low = 0;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
			printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
