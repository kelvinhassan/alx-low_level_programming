#include "main.h"
/**
 * more_numbers - print numbers between 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		-putchar('\n');
	}
}
