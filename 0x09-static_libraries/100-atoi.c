#include "main.h"
#include <stdio.h>

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
* _atoi - return number in string
* @s: string
* Return: number in string
*/

int _atoi(char *s)
{
	(void)s;
	return (0);
}
