#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define SIZE 1024

void copy_file_to_other(const char *file_from, const char *file_to);

/**
* main - main function
* @argc: number of argment
* @argv: names of argument
* Return: Succes 0 (always)
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file_to_other(argv[1], argv[2]);
	return (0);
}

/**
* copy_file_to_other - copy the file into another
* @file_from: path of file
* @file_to: path of file
*
*/

void copy_file_to_other(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buf[SIZE];

	clean_tab(buf);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

	while (read(fd_from, buf, SIZE) > 0)
	{
		write(fd_to, buf, SIZE);
	}

	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %d\n", fd_to);
		exit(100);
	}
}
