#include "main.h"
/**
 * _isupper - uppercase check
 * @c: variable to be used
 * Return: 1 if upper always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
