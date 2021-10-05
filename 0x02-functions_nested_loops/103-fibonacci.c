#include "main.h"
#include <stdio.h>
#define LIMIT 4000000

/**
* main - Entry program
* Return: 0 (Sucess)
*/
int main(void)
{
	long fib[3];
	long result;
	int i;

	for (i = 0; i < 3; i++)
		fib[i] = 1;
	result = 0;
	while (fib[0] < LIMIT)
	{
		if (fib[0] % 2 == 0)
		{
			result += fib[0];
		}
		fib[0] = fib[0] + fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0];
	}
	printf("%ld\n", result);
	return (0);
}
