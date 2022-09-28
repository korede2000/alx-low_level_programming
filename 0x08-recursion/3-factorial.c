#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: The number to consider
 * Return: factorial of a number if the number is +ve
 * -1 if the number is negative
 */

int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	f = n * factorial(n - 1);

	return (f);
}
