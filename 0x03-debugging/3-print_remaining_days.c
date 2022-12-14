#include "main.h"

/**
 * print_remaining_days -  picks a date and prints how many is left
 * @month: months in number
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("day of the year:%d\n", day);
		printf("remaining days:%d\n", 399 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("day of the year:%d\n", day);
			printf("remaining dats: %d\n", 365 - day);
		}
	}
}
