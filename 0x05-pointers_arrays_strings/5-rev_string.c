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
	char c;

	if (_strlen(s) == 0)
		return;
	i = _strlen(s) - 1;
	j = 0;
	while (s[i] && j <= (_strlen(s) - 1) / 2)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
		i--;
	}
}

