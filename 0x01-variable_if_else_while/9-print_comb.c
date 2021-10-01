#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	unsigned char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c++);
		if (c <= '9')
			putchar(',');
		else
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
