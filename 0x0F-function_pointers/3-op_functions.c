#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the quotient of a and b
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the remainder of a and b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
