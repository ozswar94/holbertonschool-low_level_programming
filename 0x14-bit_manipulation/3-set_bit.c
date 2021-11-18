#include "main.h"

/**
* set_bit - get bit at index bit
* @n: integer base 10
* @index: index on number
* Return: return byte
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_set = 1;

	if (index > sizeof(unsigned long int) * sizeof(unsigned long int))
		return (-1);
	*n |= bit_set << index;
	return (1);
}
