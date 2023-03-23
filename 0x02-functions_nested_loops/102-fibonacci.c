#include <stdio.h>

/**
 * main - Print fibonacci sequence
 * Return: Always 0;
 */

int main(void)
{
	long int i = 0, j = 1, k = 0, n;

	k = i + j;
	printf("%ld, ", k);
	for (n = 0; n < 49; n++)
	{
		printf("%ld, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	printf("20365011074\n");
	return (0);
}
