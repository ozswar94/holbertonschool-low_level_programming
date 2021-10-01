#include <stdio.h>

/**
* main - Entry of programe
* Return: 0 Always (success)
*/
int main(void)
{
	unsigned char hexa;

	hexa = '0';
	while (hexa <= 'z')
	{
		if ((hexa >= '0' && hexa <= '9') || (hexa >= 'a' && hexa <= 'f'))
			putchar(hexa++);
		else
			hexa++;
	}
	putchar('\n');
	return (0);
}
