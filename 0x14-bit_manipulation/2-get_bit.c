#include "main.h"

/**
* get_bit - get bit of number
* @n: integer base 10
* @index: index on number
* Return: return byte
*/

int get_bit(unsigned long int n, unsigned int index)
{
	while (index)
	{
		if (n == 0)
			return (-1);
		n = n >> 1;
		index--;
	}
	return (n & 1);
}
