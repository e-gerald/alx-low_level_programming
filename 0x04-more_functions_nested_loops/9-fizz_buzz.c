#include <stdio.h>

/**
 * main - FizzBuzz challenge
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
			continue;
		}
		printf("%d ", i);
	}
	return (0);
}
