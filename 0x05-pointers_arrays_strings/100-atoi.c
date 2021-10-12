#include "main.h"
#include <stdio.h>

/**
* _isdigit - determine if char is digit or not
* @c: char
* Return: 1 is digit 0 is not
*/

int _isdigit(char c)
{
	if (c >= 0 && c <= 9)
		return (0);
	return (1);
}

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

}
