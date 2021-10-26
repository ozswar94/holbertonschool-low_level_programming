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
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
	;
	size_concat = size_s1 + size_s2;

	concat = (char *)malloc(sizeof(char) * size_concat);
	if (concat == NULL || s1 == NULL || s2 == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i + j < size_concat)
	{
		if (i < size_s1)
		{
			concat[i + j] = s1[i];
			i++;
		}
		else
		{
			concat[i + j] = s2[j];
			j++;
		}
	}
	return (concat);
}

