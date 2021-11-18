#include "main.h"

/**
* get_bit - get bit of number
* @n: integer base 10
* @index: index on number
* Return: return byte
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * sizeof(unsigned long int))
		return (-1);

	return ((n >> index) & 1);
}
