#include "function_pointers.h"

/**
* print_name - print string
* @name: string
* @f: pointer of function
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
