#include "main.h"
#include <stdio.h>

/**
* _strncpy - copy string until n char
* @dest: string destination
* @src: string source
* @n: integer (limit)
* Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; src[j]; j++)
	;
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	if (j <= i)
		dest[i] = '\0';
	return (dest);
}
