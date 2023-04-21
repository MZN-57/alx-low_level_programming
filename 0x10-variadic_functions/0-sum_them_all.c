#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to sum.
 *
 * Return: If n == 0, return 0. Otherwise, return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
