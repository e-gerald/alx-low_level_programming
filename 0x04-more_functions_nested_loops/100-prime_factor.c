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
		if (num % i == 0)
		{
			num /= i;
			if (i > 5000)
				printf("%ld\n", i);
			i = 1;
		}
	}
	return (0);
}
