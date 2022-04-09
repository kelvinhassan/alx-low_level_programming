#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combinations of two digit numbers
 * all numbers should be printed as 01
 * combination must be separated by a comma followed by space
 * 00 01 and 01 00 are considered as the same combination
 * Return: 0 on success
 */
int main(void)
{
	int c = 0;
	int ff;
	int ii;

	int c2;
	int ff2;
	int ii2;

	while (c <= 98)
	{
		ff = (c / 10 + '0');
		ii = (c % 10 = '0');
		c2 = 0;
		while (c2 <= 99)
		{
			ff2 = (c2 / 10 + '0');
			ii2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(ff);
				putchar(ii);
				putchar(' ');
				putchar(ff2);
				putchar(ii2);
				
				if(c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++
		}
		c++
	}
	putchar('\n');
	return (0);
}
