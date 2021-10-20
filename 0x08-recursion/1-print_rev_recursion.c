#include "main.h"

/**
* _print_rev_recursion - writes string s reverse to stdout
* @s: string
*
* Return: Nothing.
*/
void _print_rev_recursion(char *s)
{
	if (s == NULL)
		return;
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
