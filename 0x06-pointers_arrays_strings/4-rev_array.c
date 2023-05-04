#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverses the content
 * of an array of integers
 * @a: array
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int p;
	int k;

	for (p = 0; p < n--; p++)
	{
		k = a[p];
		a[p] = a[n];
		a[n] = k;
	}
}
