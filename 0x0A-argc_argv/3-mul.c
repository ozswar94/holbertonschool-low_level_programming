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
	int mul1;
	int mul2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	result = mul1 * mul2;
	printf("%d\n", result);
	return (0);
}
