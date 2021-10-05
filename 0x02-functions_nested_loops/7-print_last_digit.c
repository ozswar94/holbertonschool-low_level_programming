#include "main.h"

/**
* print_last_digit - print the last digit of number
* @n: the number
* Return: return the value of the last digit
*/
int print_last_digit(int n)
{
	long int n_t;

	n_t = (long)n;
	if (n_t < 0)
		n_t *= -1;
	_putchar((n_t % 10) + '0');
	return (n_t % 10);
}
