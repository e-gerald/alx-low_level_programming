#include <stdio.h>

/**
 * main - Prints prime factors of number
 * Return: Always 0
 */

int main(void)
{
	long int i, num = 612852475143;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0 && i > 1)
		{
			printf("%ld", i);
			if (i != 50829599)
			{
				printf(" ");
			}
			num /= i;
			i = 1;
		}
	}
	printf("\n");
	return (0);
}
