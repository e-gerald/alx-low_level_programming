#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - n generates a random integer and check
 * if it is possitive or negative
 * Return: Negative or Positive value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
return (0);
}
