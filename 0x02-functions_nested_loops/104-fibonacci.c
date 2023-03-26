#include <stdio.h>

/**
 * main - Prints 98 fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	double i, j = 0, k = 1, fib = 0;

	for (i = 0; i <= 98; i++)
	{
		j = k;
		k = fib;
		fib = j + k;
		if (i > 0)
		{
			printf("%.0f", fib);
			if (fib != 218922995834555203584.0)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
