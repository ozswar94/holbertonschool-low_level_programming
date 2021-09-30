#include <unistd.h>

/**
* print - Print string on ouput (terminal)
*
* @str: The string which will be display
*/
void print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	print(str);
	return (1);
}

