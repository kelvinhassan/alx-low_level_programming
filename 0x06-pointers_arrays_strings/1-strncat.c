#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @src: pointer sources
 * @dest: point destination
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* should end with an '\0' end of sting character */
	dest[dest_len + i] = '\0';

	return (dest);
}
