#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - convert string binarary to integer base 10
* @b: binary string
* Return: integer base 10
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb, exp;
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	exp = 1;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		exp *= 2;
		i++;
	}
	nb = 0;
	i = 0;
	do {
		exp /= 2;
		nb += exp * (b[i] - '0');
		i++;
	} while (b[i]);

	return (nb);
}
