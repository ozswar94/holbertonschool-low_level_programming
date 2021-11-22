#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
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
* append_text_to_file - write at end of file
* @filename: path of file
* @text_content: the content write on file
* Return: 1 if success else return -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);

	if (write(file, text_content, _strlen(text_content)) == -1)
		return (-1);

	close(file);

	return (1);
}
