#include "main.h"

/**
* _strlen - size of str
* @str: the string
* Return: the size str
*/
size_t _strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

/**
* print_rev - print a str reverse
* @str: the string
* Return: nothing
*/
void print_rev(char *str)
{
	int i;

	i = _strlen(str) - 1;
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
	size_t i;
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
* print_times_table - print n table of multiplication
* @n: the number
* Return: nothing (void)
*/
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else if ((i * j) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_print_nbr(i * j);
			}
			else if ((i * j) < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_print_nbr(i * j);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_print_nbr(i * j);
			}
		}
		_putchar('\n');
	}
}

