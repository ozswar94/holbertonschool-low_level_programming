#include "main.h"

/**
* leet - encodes a string into 1337
* @str: string
* Return: string encoded
*/
char *leet(char *str)
{
	int i;
	int j;
	int k;
	char *encode = "43071";
	char *decode = "aAeEoOtTlL";

	i = 0;
	k = 0;
	while (encode[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == decode[i] || str[j] == decode[i + 1])
				str[j] = encode[k];
			j++;
		}
		i += 2;
		k++;
	}
	return (str);
}

