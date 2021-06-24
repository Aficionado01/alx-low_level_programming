#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year > 1582) && (year % 100 != 0 || year % 400 == 0))
	{
		if (month > 2 && (day > 60 && day < 366))
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day > 59)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - (59 - 28), year);
		}
		else if (month == 4 && day > 120)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - (120 - 30), year);
		}
		else if (month == 6 && day > 181)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - (181 - 30), year);
		}
		else if (month == 9 && day > 273)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - (273 - 30), year);
		}
		else if (month == 11 && day > 334)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - (334 - 30), year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
