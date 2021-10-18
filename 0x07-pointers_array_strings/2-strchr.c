#include "main.h"

/**
* _strchr - search a char in string 
* @s: string
* @c: char search
* Return: at c in string or null
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return s;
		s++;
	}
	return (NULL);
}

