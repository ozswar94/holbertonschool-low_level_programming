#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int nb;

	nb = '0';
	while (nb <= '9')
	{
		putchar(nb++);
		if (nb <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
