#include "main.h"

/**
* puts2 - print a string in stdout with a new line
* @str: string
* Return: noting
*/

void puts2(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

