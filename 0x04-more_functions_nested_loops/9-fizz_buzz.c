#include <stdio.h>
#define MAX 100

/**
* main - programme FizzBuzz
* Return: nothing
*/
int main(void)
{
	int i;

	for (i = 1; i <= MAX; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < MAX)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}

