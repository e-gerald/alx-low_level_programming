#include "main.h"
#include <string.h>

/**
 * *_strncat - Concatenate two strings to size
 * @dest: Argument 1
 * @src: Argument 2
 * @n: Size
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
