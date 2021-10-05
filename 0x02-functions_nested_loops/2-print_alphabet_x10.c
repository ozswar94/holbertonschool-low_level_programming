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

/**
* print_alphabet_x10 - pint in stdout lowercase alphabet 10 times
* Return: nothing (void)
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}

