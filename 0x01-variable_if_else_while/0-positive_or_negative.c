#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry of programe
* Description: this programme print a random number and say if
* the number is negavie, positive or zero.
* Return: 0 Always (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
