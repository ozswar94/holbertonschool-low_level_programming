#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - print argument int
* @separator: string separator
* @n: number of arguement
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ap, int), separator);
	va_end(ap);
	putchar('\n');
}
