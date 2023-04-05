#include "main.h"

/**
 * factorial - Get factorial of any given number
 * @n: Int argument
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
