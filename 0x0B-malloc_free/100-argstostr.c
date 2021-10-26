#include "main.h"
#include <stdio.h>

/**
* argstostr - priint all argument + name of program
* @ac: number of argument + name of program
* @av: argument + name of program
* Return: nothing
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *buffer;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		;
		size += j;
	}

	buffer = (char *)malloc(sizeof(char) * size + i + 1);
	if (buffer == NULL)
		return (NULL);
	k = 0;
	for (i = 0; av[i] != NULL; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[k] = av[i][j];
			k++;
		}
		buffer[k] = '\n';
		k++;
	}
	buffer[k++] = '\0';
	return (buffer);
}
