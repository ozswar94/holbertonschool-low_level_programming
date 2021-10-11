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
* puts_half - print the seconde half of string
* @str: string
* Return: noting
*/

void puts_half(char *str)
{
	int i;

	i = (_strlen(str) - 1) / 2;
	if (i == 1)
		i++;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}

