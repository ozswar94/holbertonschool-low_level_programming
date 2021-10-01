#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int nb1;
	int nb2;

	for (nb1 = 0; nb1 < 100; nb1++)
	{
		for (nb2 = 0; nb2 < 100; nb2++)
		{
			if (nb1 < nb2)
			{
				putchar((nb1 / 10) + '0');
				putchar((nb1 % 10) + '0');
				putchar(' ');
				putchar((nb2 / 10) + '0');
				putchar((nb2 % 10) + '0');
				if (nb1 < 99 || nb2 < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
