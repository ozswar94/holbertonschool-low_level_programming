#include <stdio.h>
#include <stdlib.h>

#define CENT_1	1
#define CENT_2	2
#define CENT_5	5
#define CENT_10	10
#define CENT_25	25

/**
* main -  prints the minimum number of coins
* to make change for an amount of money.
* @argc: number of argument + name of program
* @argv: argument + name of program
* Return: 0 (sucess)
*/
int main(int argc, char **argv)
{
	int cents;
	int change;

	if (argc == 1 || argc > 2)
	{
		puts("Error");
		return (1);
	}
	cents = 0;
	change = atoi(argv[1]);
	if (change == 0)
	{
		puts("0");
		return (0);
	}
	while (change)
	{
		if (change % CENT_25 == 0)
			change -= CENT_25;
		else if (change % CENT_10 == 0)
			change -= CENT_10;
		else if (change % CENT_5 == 0)
			change -= CENT_5;
		else if (change % CENT_2 == 0)
			change -= CENT_2;
		else if (change % CENT_1 == 0)
			change -= CENT_1;
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
