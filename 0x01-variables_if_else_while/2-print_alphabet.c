#include <stdio.h>
/**
 * main - prints the lower case of alphabets
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putcha(c);
		c++;
	}
	putchar('\n');
	return (0);
}
