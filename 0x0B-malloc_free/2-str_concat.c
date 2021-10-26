#include "main.h"
#include <stdio.h>

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* str_concat - concat two string and return in new string
* @s1: string
* @s2: string
* Return: concat string
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j;
	unsigned int size_s1, size_s2 = 0;
	unsigned int size_concat = 0;

	if (s1 == NULL)
		size_s1 = 0;
	else
		size_s1 = _strlen(s1);
	if (s2 == NULL)
		size_s2 = 0;
	else
		size_s2 = _strlen(s2);
	size_concat = size_s1 + size_s2;

	concat = (char *)malloc(sizeof(char) * size_concat + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		concat[i] = s1[i];
	for (j = 0; j < size_s2; j++)
		concat[i + j] = s2[j];
	return (concat);
}

