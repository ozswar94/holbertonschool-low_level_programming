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
	int result;
	int change;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}
	result = 0;
	change = atoi(argv[1]);
	while (change)
	{
		if (change % CENT_25 == 0)
		{
			change -= CENT_25;
			result++;
		}
		else if (change % CENT_10 == 0)
		{
			change -= CENT_10;
			result++;
		}
		else if (change % CENT_5 == 0)
		{
			change -= CENT_5;
			result++;
		}
		else if (change % CENT_2 == 0)
		{
			change -= CENT_2;
			result++;
		}
		else if (change % CENT_1 == 0)
		{
			change -= CENT_1;
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
