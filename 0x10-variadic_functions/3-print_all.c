#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - print all argument argument
* @format: format argument
*
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					str = "";
				}
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	putchar('\n');
	va_end(ap);
}
