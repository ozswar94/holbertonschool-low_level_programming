#include <stdio.h>

/**
* main - print argv on stdout
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
