#include "main.h"

/**
* print_alphabet - pint in stdout lowercase alphabet
* Return: nothing (void)
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
		_putchar(c++);
	_putchar('\n');
}

