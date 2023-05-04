#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords *
 * Return: 0 (Success)
 */

int main(void)
{
	int pass[100];
	int x, sum, n;

	sum = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}