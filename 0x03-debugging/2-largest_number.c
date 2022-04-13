#include "main.h"

/**
 * largest_number - returns the largest of
 *three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest_number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b > c)
	{
		largest = a;
	}
	else if (b >= a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
