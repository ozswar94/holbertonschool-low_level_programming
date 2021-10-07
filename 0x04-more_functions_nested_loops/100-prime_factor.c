#include <stdio.h>
#define FACT_N 612852475143

/**
* main - factor prime
* Return: 0
*/
int main(void)
{
	unsigned long i;
	unsigned long prime_f;

	prime_f = 1;
	for (i = 1; prime_f <= FACT_N; i++)
		prime_f *= i;
	printf("%lu\n", prime_f);
	return (0);
}
