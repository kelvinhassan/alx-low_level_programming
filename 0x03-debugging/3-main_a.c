#include <stdio.h>
#include "main.h"
/**
 * main - takes a date and prints how many days
 * are left in the year. taking leap year into account
 * Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day  = 01;
	yeay = 1997;

	printf("date: %02d/%02d/%04d\n", month, day, year);

	day = conert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
