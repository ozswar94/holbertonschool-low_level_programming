#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - print argument int
* @separator: string separator
* @n: number of arguement
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", (str == NULL) ? "(nil)" : str);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
