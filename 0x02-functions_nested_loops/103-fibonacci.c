#include <stdio.h>

/**
 * main - Print even fibonacci sequence
 * Return: Always 0;
 */

int main(void)
{
	long int i = 0, j = 1, k = 0, n, sum = 0;

	for (n = 0; n < 50; n++)
	{
		i = j;
		j = k;
		k = i + j;
		if (k < 4000000 && k % 2 == 0)
		{
			sum += k;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
