#include <stdio.h>
#include <stdlib.h>
/**
 * main - print base 16 numbers
 * Return: 0 on success
 */
int main(void)
{
	char h;

	for (h = 0; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
