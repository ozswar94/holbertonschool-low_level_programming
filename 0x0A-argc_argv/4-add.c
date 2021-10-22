#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - add number in params
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/
int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	result = 0;
	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
