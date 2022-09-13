#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is the number to consider
 *
 * Return: last digit of the number n
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
