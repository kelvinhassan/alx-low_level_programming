#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - using putchar only twice in code
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while ( c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return(0);
}

