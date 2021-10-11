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
	char tmp;

	i = _strlen(s) - 1;
	for (j = 0; j != i; j++)
	{
		tmp = s[i];
		s[i--] = s[j];
		s[j] = tmp;
	}
}

