#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	while (num1 + '0' <= '7')
	{
		while (num2 + '0' <= '8')
		{
			while (num3 + '0' <= '9')
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 + '0' < '7' || num2 + '0' < '8' || num3 + '0' < '9')
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num2 + 1;
	}
	putchar('\n');
	return (0);
}
