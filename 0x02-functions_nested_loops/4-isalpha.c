#include "main.h"
/**
 * _isalpha - chceks whether character is from English alphabet
 * @c: character to be checked
 * Return: 1 if character is English
 * 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
