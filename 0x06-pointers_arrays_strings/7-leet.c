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
	char *encode = "4433007711";
	char *decode = "aAeEoOtTlL";

	i = 0;
	while (encode[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == decode[i] || str[j] == decode[i])
				str[j] = encode[i];
			j++;
		}
		i += 2;
	}
	return (str);
}

