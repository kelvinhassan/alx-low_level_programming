#include "main.h"
/**
 * main -print alphabets in lower case
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
