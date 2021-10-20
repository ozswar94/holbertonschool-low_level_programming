#include "main.h"
#include <stdio.h>

/**
* _sqrt - square root tmp
* @base: int
* @x: int
* Return: On success, these functions return the square root of base.
*/
int _sqrt(int base, int x)
{
	if (x * x == base)
		return (x);
	if (x * x > base)
		return (-1);
	return (_sqrt(base, x + 1));

}

/**
* _sqrt_recursion - These functions return the nonnegative square root of x
* @n: int
* Return: On success, these functions return the square root of x.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
