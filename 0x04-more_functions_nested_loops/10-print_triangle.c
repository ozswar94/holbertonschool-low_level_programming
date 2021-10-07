#include "main.h"

/**
* print_triangle - draw a triangle in terminal
* @size: size of triangle
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
