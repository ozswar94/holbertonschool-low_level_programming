#include "main.h"
#include <stdio.h>

/**
* _isalpha - check the char is alpha or not
* @c: the char check
* Return: 0 if is alpha, 1 if not alpha
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/**
* separator - check if is a char separator
* @c: char
* Return: 1 if is a separator, 0 if not a separator
*/
int separator(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
		c == '.' || c == '!' || c == '?' || c == '(' || c == ')' ||
		c == '{' || c == '}' || c == '"')
		return (1);
	return (0);
}

/**
* cap_string - Capitalize word
* @str: string
* Return: string
*/

char *cap_string(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i])
	{
		while (_isalpha(str[i]) == 0 && str[i])
			i++;
		j = 0;
		while (_isalpha(str[i + j]) == 1 && str[i + j])
			j++;
		if ((str[i] >= 'a' && str[i] <= 'z') && separator(str[i - 1]) == 1)
			str[i] -= 32;
		i += j;
	}
	return (str);
}
