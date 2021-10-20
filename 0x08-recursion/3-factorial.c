#include "main.h"

/**
* _strlen_recursion - size of string s
* @s: string
*
* Return: Nothing.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return n * factorial(n - 1);
}
