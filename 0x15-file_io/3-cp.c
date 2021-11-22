#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void error_file(char *name, int num_error, int fd);

/**
* main - main function
* @argc: number of argment
* @argv: names of argument
* Return: Succes 0 (always)
*/
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd_from, fd_to, r, w;

	if (argc != 3)
		error_file(NULL, 97, 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_file(argv[1], 98, 0);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_file(argv[2], 99, 0);

	while ((r = read(fd_from, buf, 1024)) != 0)
	{
		if (r == -1)
			error_file(argv[1], 98, 0);
		w = write(fd_to, buf, r);
		if (w == -1)
			error_file(argv[2], 99, 0);
	}

	if (close(fd_from) == -1)
		error_file(NULL, 100, fd_from);

	if (close(fd_to) == -1)
		error_file(NULL, 100, fd_to);

	return (0);
}

/**
* error_file - check error file
* @name: path of file
* @num_error: path of file
* @fd:
*
*/
void error_file(char *name, int num_error, int fd)
{
	switch (num_error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", name);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
			break;
		default:
			break;
	}

}
