#include "main.h"

/**
 * _pow_recursion - finds x raised to the power y
 * @x: the base number
 * @y: the index
 * Return: x to the power of y if y is positive
 * -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	int square = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	square = square * x;
	square = square * _pow_recursion(x, (y - 1));

	return (square);
}
