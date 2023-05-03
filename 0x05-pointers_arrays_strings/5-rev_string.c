#include "main.h"

/**
 * rev_string - A function that will reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int y;

	while (s[counter] != '\0')
	counter++;
	for (y = 0; y < counter; y++)
	{
		counter--;
		rev = s[y];
		s[y] = s[counter];
		s[counter] = rev;
	}
}

