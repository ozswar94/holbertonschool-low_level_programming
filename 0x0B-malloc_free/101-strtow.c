#include "main.h"

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* strtow - Each element of this array should contain
* a single word, null-terminated
* @str: string
* Return: a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	int i, j, k;
	int word = 0;
	char **tab_word;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			word++;
	tab_word = (char **)malloc(sizeof(char *) * word + 1);
	if (tab_word == NULL)
		return (NULL);

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (str[i + j] != ' ' && str[i + j])
			j++;
		if (j == 0)
			continue;

		tab_word[k] = (char *)malloc(sizeof(char) * j + 1);
		if (tab_word[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(tab_word[j]);
			free(tab_word);
			return (NULL);
		}

		for (j = 0; str[i + j] != ' ' && str[i + j]; j++)
			tab_word[k][j] = str[i + j];
		tab_word[k][j] = '\0';
		k++;
		i += j;
	}
	tab_word[k] = NULL;
	return (tab_word);
}
