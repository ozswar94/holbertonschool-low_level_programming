#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	while (num1 + '0' <= '8')
	{
		while (num2 + '0' <= '9')
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 + '0' < '8' || num2 + '0' < '9')
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
