#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a
* square matrix of integers
* @a:  matix
* @size: size of matrix
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0 ; i < size; i++)
			sum += a[i + i * size];

	printf("%d, ", sum);
	sum = 0;
	for (i = size - 1; i >= 0; i--)
			sum += a[(size - i - 1) + i * size];
	printf("%d\n", sum);
}