#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: the number of '_' characters to use
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
