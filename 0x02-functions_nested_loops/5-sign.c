#include "main.h"

/**
 * print_sign - print the sign of a number n
 * @n: the number to check
 *
 * Return: 1 if n is > 0
 * 0 if n equals 0
 * -1 if n is neagative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
