#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	unsigned char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
