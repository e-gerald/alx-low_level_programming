#include<stdio.h>
#include<ctype.h>

/**
 * main - Print Hex digits
 * Return: Display base 16 decimals
*/

int main(void)
{
	int i;

	for (i = '0'; i <= 'F'; i++)
	{
		if (i > '9' && i < 'A')
		{
			i == ' ';
		}
		else
			putchar(tolower(i));
	}
	putchar('\n');
	return  (0);
}
