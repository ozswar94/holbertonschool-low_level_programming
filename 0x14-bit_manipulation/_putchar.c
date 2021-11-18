#include <unistd.h>

/**
* _putchar - print stdout a char
* @c: char which print
* Return: char print
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}
