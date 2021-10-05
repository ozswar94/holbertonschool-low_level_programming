#include "main.h"

/**
* print_sign - check if the number sign is - + or null
* @n: the number check
* Return: 1 if n is positive, 0 if n is null or -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
