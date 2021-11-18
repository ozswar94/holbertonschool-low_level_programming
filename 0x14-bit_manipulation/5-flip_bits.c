#include "main.h"

/**
* flip_bits - set index bit at 0
* @n: integer base 10
* @m: index on number
* Return: number byte change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int byte_change = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			byte_change++;
		n = n >> 1;
		m = m >> 1;
	}
	return (byte_change);
}

