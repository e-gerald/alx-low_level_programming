#include "main.h"

/**
 * is_prime_number - Find prime number
 * @n: Argument
 * @i: Iterator
 * Return: 1 and 0
 */

int prime(int n, int i);

int is_prime_number(int n)
{
	int i = 0;

	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * prime - Find prime number
 * @n: Number argument
 * @i: Iterator
 * Return: Prime sighals
 */

int prime(int n, int i)
{
	if (i > 1 && i < n && n % i == 0)
	{
		return (0);
	}
	else if (i > 1 && i < n && n % i != 0)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
