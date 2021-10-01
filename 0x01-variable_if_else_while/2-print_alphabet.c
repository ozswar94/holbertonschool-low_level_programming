#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	unsigned char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
