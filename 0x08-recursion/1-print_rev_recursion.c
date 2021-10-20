#include "main.h"

/**
* _print_rev_recursion - writes string s reverse to stdout
* @s: string
*
* Return: Nothing.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
