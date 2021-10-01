#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	unsigned int nb;

	nb = 0;
	while (nb <= 9)
		printf("%d", nb++);
	putchar('\n');
	return (0);
}
