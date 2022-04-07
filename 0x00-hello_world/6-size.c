#include <stdio.h>
/**
 * main - main block of code
 * pint various sizes of datatypes
 * return: 0
 */
int main(void)//this specifies there are no arguments taken by main
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
