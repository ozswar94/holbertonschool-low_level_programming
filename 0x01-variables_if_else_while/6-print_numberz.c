#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
