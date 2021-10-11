#include "main.h"
#include <stdio.h>

/**
* print_array - print array
* @a: int array
* @n: size of array
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
}
