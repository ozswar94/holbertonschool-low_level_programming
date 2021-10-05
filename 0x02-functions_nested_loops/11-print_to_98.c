#include "main.h"
#define LIMIT 98
/**
* print_rev - print a str reverse
* @str: the string
* Return: nothing
*/
void print_rev(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
}
/**
* _abs - absolute value
* @n: the value
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

/**
* _print_nbr - print a number in stdout
* @n: the number print
* Return: nothing
*/
void _print_nbr(int n)
{
	int i;
	int mul_10;
	long number;
	char nb[16];

	mul_10 = 10;
	number = (long)n;
	if (number < 0)
	{
		number = _abs(number);
		_putchar('-');
	}
	while (number / 10)
	{
		number /= 10;
		mul_10 *= 10;
	}
	number = (long)_abs(n);
	i = 0;
	while (mul_10 / 10)
	{
		nb[i] = (number % 10) + '0';
		number /= 10;
		mul_10 /= 10;
		i++;
	}
	nb[i] = '\0';
	print_rev(nb);
}

/**
* print_to_98 - print every number up to 98
* @n: the number
* Return: nothing (void)
*/
void print_to_98(int n)
{
	if (n == 98)
	{
		_print_nbr(n);
		_putchar('\n');
		return;
	}
	if (n != LIMIT)
	{
		if (n < LIMIT)
		{
			for (; n <= LIMIT; n++)
			{
				_print_nbr(n);
				if (n != LIMIT)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		else
		{
			for (; n >= LIMIT; n--)
			{
				_print_nbr(n);
				if (n != LIMIT)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
