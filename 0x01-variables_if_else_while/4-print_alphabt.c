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
	{
		if (c == 'e' || c == 'q')
			c++;
		else
			putchar(c++);
	}
	putchar('\n');
	return (0);
}
