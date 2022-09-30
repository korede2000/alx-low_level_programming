#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to find the absolut
 *
 * Return: absolute of an integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}