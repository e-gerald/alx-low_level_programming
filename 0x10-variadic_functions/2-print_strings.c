#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints string using variadic function
 * @separator: String separator
 * @n: Number of integers
 * Return: String
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char *));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		else if (i != (n - 1) && separator == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(string);
}
