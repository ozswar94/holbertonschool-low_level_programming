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
* more_numbers - print 10 times number 0 - 14
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_print_nbr(j);
		_putchar('\n');
	}
}
