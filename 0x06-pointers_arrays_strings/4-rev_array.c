#include "main.h"

/**
* reverse_array - copy string until n char
* @a: integer array
* @n: integer (limit)
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
