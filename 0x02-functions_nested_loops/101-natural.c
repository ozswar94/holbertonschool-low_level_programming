#include "main.h"
#define LIMIT 1024
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
* main - Entry program
* Return: 0 (Sucess)
*/
int main(void)
{
	int i;
	int result;

	result = 0;
	for (i = 0; i < LIMIT; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			result += i;
	}
	_print_nbr(result);
	_putchar('\n');
	return (0);
}

