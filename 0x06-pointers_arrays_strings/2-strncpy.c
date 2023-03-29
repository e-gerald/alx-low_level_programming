#include "main.h"
#include <string.h>

/**
 * _strncpy - Copy string to a destination
 * @dest: Argument 1
 * @src: Argument 2
 * @n: Size
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
