#include "main.h"

/**
* str_concat - concat two string and return in new string
* @s1: string
* @s2: string
* Return: concat string
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int size_s1;
	unsigned int size_s2;
	unsigned int size_concat;

	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
	;
	for (size_s2 = 0; s1[size_s2] != '\0'; size_s2++)
	;
	size_concat = size_s1 + size_s2;

	concat = (char *)malloc(sizeof(char) * size_concat + 1);
	if (!concat || !s1 || !s2)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		concat[i] = s1[i];
	for (j = 0; j <= size_s2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	return (concat);
}

