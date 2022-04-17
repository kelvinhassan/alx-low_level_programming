#include <stdio.h>
/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
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
