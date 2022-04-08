#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print all sing digit numbers base 10
 * Return: 0 on success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
