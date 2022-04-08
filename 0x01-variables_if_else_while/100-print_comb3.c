#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combinations of two
 * digit numbers separated by , followed by space
 * they should be in ascending order
 * 01 and 10 are considered the same combination of digit 0 and 1
 * you can only use putchar max five times
 * Return: 0 on success
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if(c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++
		}
		d++
	}
	putchar('\n');
	return (0);
}
