#include "main.h"
#include <stdio.h>

#include "main.h"

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


/**
* rev_string - reverse string
* @s: string
* Return: noting
*/

void rev_string(char *s)
{
	int i;
	int j;
	char *tmp;

	tmp = (char *)malloc(sizeof(char) * _strlen(s));
	if (tmp == NULL)
		return;
	i = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	j = 0;
	i--;
	while (s[j])
	{
		s[j] = tmp[i];
		i--;
		j++;
	}
	free(tmp);
	tmp = NULL;
}

