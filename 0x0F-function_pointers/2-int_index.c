#include "function_pointers.h"

/**
* int_index - index
* @array: int array
* @size: size of array
* @cmp: pointer of function which compare value
* Return: -1 if false, something else otherwise
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);			
	}
	return (-1);
}
