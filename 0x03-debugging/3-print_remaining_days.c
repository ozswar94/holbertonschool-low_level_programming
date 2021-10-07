#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || !(year % 100 == 0)) && (year % 400 == 0))
	{
		if (month == 2 && day > 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else if (month == 4 && day > 120)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 90, year);
		else if (month == 6 && day > 181)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 120, year);
		else if (month == 9 && day > 273)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 212, year);
		else if (month == 11 && day > 334)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 304, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else
	{
		if (month == 2 && day >= 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else if (month == 4 && day >= 121)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 90, year);
		else if (month == 6 && day >= 182)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 120, year);
		else if (month == 9 && day >= 274)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 212, year);
		else if (month == 11 && day >= 335)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 304, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
