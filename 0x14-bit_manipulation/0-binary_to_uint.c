#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - convert string binarary to integer base 10
* @b: binary string
* Return: integer base 10
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0, exp = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		exp *= 2;
		i++;
	}
	i = 0;
	while (b[i])
	{
		nb += exp * (b[i] - '0');
		i++;
		exp /= 2;
	}

	return (nb);
}
