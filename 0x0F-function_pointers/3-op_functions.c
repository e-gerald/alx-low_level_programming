#include "3-calc.h"

int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - Addition function
 * @a: argument 1
 * @b: argument 2
 * Return: Sum of arguments
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: argument 1
 * @b: argument 2
 * Return: Difference of 2 arguments
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: argument 1
 * @b: argument 2
 * Return: Product of 2 arguments
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: argument 1
 * @b: argument
 * Return: Quotent of 2 arguments
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus function
 * @a: argument 1
 * @b: argument 2
 * Return: Remainder of 2 arguments
 */

int op_mod(int a, int b)
{
	return (a % b);
}
