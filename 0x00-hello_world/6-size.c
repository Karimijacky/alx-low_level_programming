#include <stdio.h>

/**
 * main - Prints sizes of the computer it is compiled and run on
 * Return: 0 (success)
 */

int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float a;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
