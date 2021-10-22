#include <stdio.h>

/**
* main - print number of argument
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
