#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - programe calc
* @argc: number of argument
* @argv: Name of program + number of argument
* Return: 98 if enogh argument, 99 if not op,
* 100 div by 0 and 0 if Success
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 && num2 == 0) ||
		(strcmp(argv[2], "%") == 0 && num2 == 0))
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
