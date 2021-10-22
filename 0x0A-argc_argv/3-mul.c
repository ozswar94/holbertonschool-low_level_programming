#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply tow number
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
