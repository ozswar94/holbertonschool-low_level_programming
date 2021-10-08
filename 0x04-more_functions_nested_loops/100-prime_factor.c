#include <stdio.h>
#define FACT_N 612852475143

/**
* main - factor prime
* Return: 0
*/
int main(void)
{
	unsigned long div;
	unsigned long num = FACT_N;

	div = 2;
	while (num != div)
	{
		while (num % div == 0)
			num = num / div
		div++;
	}
	printf("%d\n", div);
	return (0);
}
