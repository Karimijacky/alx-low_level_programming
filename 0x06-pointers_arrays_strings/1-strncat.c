#include "main.h"

/**
 * _strncat - A function that will concatenate
 * two strings using n bytes
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int k;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[x] = src[k];
	x++;
	k++;
	}
	dest[x] = '\0';
	return (dest);
}
