#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for 
 * the multiples of five print Buzz. 
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: always 0
 */
int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("%s", "BUzz");
		}
		else
		{
			printf("%d", c);
		}

		if c != 100)
		{
			printf(" ");
		}
		c++;
	}
	printf('\n');
	return (0);
}
