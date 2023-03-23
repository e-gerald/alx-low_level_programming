#include <stdio.h>

/**
 * main - Print even fibonacci sequence
 * Return: Always 0;
 */

int main(void)
{
	long int i = 0, j = 1, k = 0, n;

	k = i + j;
	for (n = 0; n < 50; n++)
	{
		i = j;
		j = k;
		k = i + j;
		if (k < 3524578 && k % 2 == 0)
		{
			printf("%ld, ", k);
		}
	}
	printf("3524578\n");
	return (0);
}
