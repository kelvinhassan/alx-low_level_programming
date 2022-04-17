#include "main.h"
/**
 * print_triangle - print triangle followed by new line
 * @size : integer type
 * Return : void
 */
void print_triangle(int size)
{
	int i = 1, k;

	while (i <= size && size > 0)
	{
		k = 0;
		while (k < size - i)
		{
			_putchar(' ');
			k++;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
