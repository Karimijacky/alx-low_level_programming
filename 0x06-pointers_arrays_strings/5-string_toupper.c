#include "main.h"
#include <stdio.h>

/**
 * string_toupper - will change all all lowercase
 * letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
