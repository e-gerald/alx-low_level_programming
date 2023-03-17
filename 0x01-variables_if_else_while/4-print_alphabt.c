#include<stdio.h>

/**
 * main - Programing prints all char except e & q
 *
 * Return: Outputs char without e & q
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			i == ' ';
		else
			putchar(i);
		}
	putchar('\n');
	return (0);
}
