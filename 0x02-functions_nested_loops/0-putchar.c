#include "main.h"
/**
 * main - Print the _putchar function
 * Return: 0 if success
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	retunr (0);
}
