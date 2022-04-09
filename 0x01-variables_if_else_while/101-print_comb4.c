#include <stdio.h>
/**
 * main - Print 3 combination of numbers
 * without repeating 012, 120, 102, 021, 201, 210
 * are considered the same
 * you can only use put char
 * you are not allowed to use variable char
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j='0';
		i++;
	}
	putchar('\n');
	return (0);
}
