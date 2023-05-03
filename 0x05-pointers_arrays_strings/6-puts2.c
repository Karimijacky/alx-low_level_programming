#include "main.h"

/**
 * puts2 - A function that printss one character out of two
 * beiginning with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int p = 0;
	char *y = str;
	int q;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	p = longi - 1;
	for (q = 0 ; q <= p ; q++)
	{
		if (q % 2 == 0)
	{
		_putchar(str[q]);
	}
	}
	_putchar('\n');
}
