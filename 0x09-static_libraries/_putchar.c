#include <unistd.h>

/**
 * _putchar - Static library _putchar
 * @c: Character variable
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
