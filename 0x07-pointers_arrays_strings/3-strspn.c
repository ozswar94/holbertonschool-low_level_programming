#include "main.h"

int _isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
	return 0;
}

/**
* _strspn - get length of a prefix substring
* @s: string
* @accept: char allow
* Return: size of spn
*/
unsigned int _strspn(char *s, char *accept)
{

}

