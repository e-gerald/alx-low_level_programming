#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print all datatype
 * @format: Datatype format
 * Return: Printed strings, char, float and int
 */

void print_all(const char * const format, ...)
{
	va_list data;
	int i = 0;
	char *p, *s = "";

	va_start(data, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(data, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(data, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(data, double));
					break;
				case 's':
					p = va_arg(data, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", s, p);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(data);
}
