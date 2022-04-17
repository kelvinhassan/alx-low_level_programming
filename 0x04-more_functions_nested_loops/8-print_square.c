#include "main.h"

/**
 * print_square - prints a square
 * @n: Number of _ to be printed
 * Retunr: void
 */
void print_square(int n)
{
	int k;
	int l;

	for (l = 0; l < n; l++)
	{
		for (k = 0; k < n; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
