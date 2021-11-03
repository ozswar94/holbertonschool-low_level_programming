#include "function_pointers.h"

/**
* array_iterator - iter
* @array: int array
* @size: size of array
* @action: pointer of function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
