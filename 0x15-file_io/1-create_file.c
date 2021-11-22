#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* _strlen - caculate size of string
* @str: string
* Return: len of string
*/

size_t _strlen(char *str)
{
	size_t len = 0;

	if (str == NULL)
		return (0);

	while (str[len])
		len++;
	return (len);
}

/**
* create_file - creaeate a file and write in file
* @filename: path of file
* @text_content: the content write on file
* Return: 1 if success else return -1
*/

int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (filename != NULL)
		if (write(file, text_content, _strlen(text_content)) == -1)
			return (-1);

	close(file);

	return (1);
}
