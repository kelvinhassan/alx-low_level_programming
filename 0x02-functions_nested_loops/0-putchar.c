#include <stdio.h>
/**
 * main - Print the _putchar function
 * Return: 0 if success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return(0);
}
