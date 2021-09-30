#include <unistd.h>

/**
* print - Print string on ouput (terminal)
*
* @str: The string which will be display
*/
void print(char str[])
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
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
	return (0);
}

