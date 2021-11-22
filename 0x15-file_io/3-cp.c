#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define SIZE 1024

void copy_file_to_other(const char *file_from, const char *file_to);
void clean_tab(char *tab);

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
	int fd_from, fd_to, r = 1, w = 1;
	char buf[SIZE];

	clean_tab(buf);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

	while (r)
	{
		r = read(fd_from, buf, SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		w = write(fd_to, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
			exit(99);
		}
		clean_tab(buf);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
* clean_tab - clean buffer
* @tab: string
*
*/

void clean_tab(char *tab)
{
	int i;

	for (i = 0; i < SIZE; i++)
		tab[i] = 0;
}
