#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: the number of '_' characters to use
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}	
	_putchar('\n');
}
