#include <stdio.h>
/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 * Return: void
 */

int main(void)
{
	int i = 1;

	while ( i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
