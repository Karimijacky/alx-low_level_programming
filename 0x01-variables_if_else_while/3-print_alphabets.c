#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - point of entry
 * Return: Always 0 (successful)
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}