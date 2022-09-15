#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
