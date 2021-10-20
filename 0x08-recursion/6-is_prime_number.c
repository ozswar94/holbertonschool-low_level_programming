#include "main.h"

/**
* _prime - check if n is prime
* @n: int
* @p: int
* Return: 1 if is prime 0 if not
*/
int _prime(int n, int p)
{
	if (p <= 1)
		return (0);
	else if (p == 2)
		return (1);
	else if (n % p == 0)
		return (0);
	return (_prime(n, p - 1));
}

/**
* is_prime_number - check if n is prime
* @n: int
* Return: 1 if is prime 0 if not
*/
int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
