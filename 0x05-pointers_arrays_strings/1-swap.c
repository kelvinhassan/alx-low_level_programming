#Include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
