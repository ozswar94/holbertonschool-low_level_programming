#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - read a file
* @filename: path name
* @letters: number letter read
* Return: number of letters read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t len = 0;
	int file;
	int c;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	while (read(file, &c, 1) != 0 && len < letters)
	{
		write(STDOUT_FILENO, &c, 1);
		len++;
	}

	close(file);

	return (len);
}
