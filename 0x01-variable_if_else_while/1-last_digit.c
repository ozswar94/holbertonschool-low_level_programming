#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int n;
	int div;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	div = 10;
	if (n < 0)
		div *= -1;
	if ((n % div) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % div));
	else if ((n % div) < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, (n % div));
	else
		printf("Last digit of %d is %d and is 0\n", n, (n % div));
	return (0);
}
