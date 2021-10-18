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
	int len_prefix;
	int i;
	int j;
	int k;
	int l;

	i = len_prefix = 0;
	while (s[i])
	{
		j = 0;
		l = 0;
		while (accept[j])
		{
			k = 0;
			while (s[i + k])
			{
				if (s[i + k] == accept[j])
				{
					l++;
					break;
				}
				k++;
			}

		}
	}
}

