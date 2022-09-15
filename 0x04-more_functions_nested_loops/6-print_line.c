#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: represents the length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
