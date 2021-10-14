#include "main.h"

/**
* print_number - print the number at 0 to 9
*/
void print_number(void)
{
	char i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
