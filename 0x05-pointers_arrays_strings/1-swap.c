#include "main.h"
/**
 * main - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void main(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
