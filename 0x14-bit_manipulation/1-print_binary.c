#include <stdlib.h>
#include "main.h"

/**
* print_binary - int base 10 to int base 2 and print
* @n: integer base 10
*
*/

void print_binary(unsigned long int n)
{
	if (n >  1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 0x01));
}
