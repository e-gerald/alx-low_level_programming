#include <stdarg.h>

/**
 * sum_them_all - Find sum of numbers using variadic functions
 * @n: integer argument
 * Return: Sum of numbers n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
