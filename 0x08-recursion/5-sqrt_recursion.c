#include "main.h"

/**
 * _sqrt_recursion - Get natural square root of numbers
 * @n: Number argument
 * Return: Square root
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * _sqrt - Find actual square root
 * @n: Number argument
 * @i: Iterator
 * Return: Square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (n == (i * i))
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
