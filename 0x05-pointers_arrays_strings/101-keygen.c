#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generate random numbers
 * Return: Always 0
 */

int main(void)
{
	srand(time(NULL));
	rand();
	return (0);
}
