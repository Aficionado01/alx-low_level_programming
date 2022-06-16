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
	int months_cum_days[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 0, 0, 0};

	months_cum_days[9] = 304;
	months_cum_days[10] = 334;
	months_cum_days[11] = 365;

	if ((year % 4 == 0 && year > 1582) && (year % 100 != 0 || year % 400 == 0))
	{
		if (month > 2)
			day++;

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month >= 2 && day > months_cum_days[month - 1])
		{
			int day_of_month = day - months_cum_days[month - 2];

			printf("Invalid date: %02d/%02d/%04d\n", month, day_of_month, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
