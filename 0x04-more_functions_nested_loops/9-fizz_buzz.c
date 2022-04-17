#include <"main.h">
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 * Return: void
 */

int main(void)
{
	int h = 1;

	while ( h < 101)
	{
		if (h % 3 == 0 && h % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (h % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (h % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", h);
		}

		if (h != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}

