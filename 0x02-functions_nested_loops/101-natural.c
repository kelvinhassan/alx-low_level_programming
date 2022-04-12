#include <stdio.h>
/**
 * main - compute and print sum of all natural numbers
 * multples of 3, 5 and below 1024
 * Return: void
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	printf("%d\n", res);
	return (0);
}
