#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that sum all of its parameters
 * @n: number of parameters
 *
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
