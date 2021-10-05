#include "main.h"
#include <stdio.h>
#define LIMIT 98

/**
* main - Entry program
* Return: 0 (Sucess)
*/
int main(void)
{
	unsigned long fib[3];
	int i;

	for (i = 0; i < 3; i++)
		fib[i] = 1;
	for (i = 0; i < LIMIT; i++)
	{
		if (i != LIMIT - 1)
		{
			printf("%lu, ", fib[0]);
			fib[0] = fib[0] + fib[1];
			fib[1] = fib[2];
			fib[2] = fib[0];
		}
		else
			printf("%lu\n", fib[0]);
	}
	return (0);
}
