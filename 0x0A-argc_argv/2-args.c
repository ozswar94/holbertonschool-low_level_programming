#include <stdio.h>

/**
* main - print all argument + name of program
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/
int main(int argc, char **argv)
{
	int i;


	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
