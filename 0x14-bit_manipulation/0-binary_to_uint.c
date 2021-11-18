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
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		nb += (b[len] - '0') * exp;
		exp *= 2;
	}
	return (nb);
}
