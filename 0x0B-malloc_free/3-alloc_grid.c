#include "main.h"
#include <stdio.h>

/**
* alloc_grid - create tab new dimention
* @width: int
* @height: int
* Return: tab two dimension
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **new_tab;

	new_tab = (int **)malloc(sizeof(int *) * height);
	if (new_tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new_tab[i] = (int *)malloc(sizeof(int) * width);
		if (new_tab == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			new_tab[i][j] = 0;
	}
	return (new_tab);
}

