#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @x: length of the diagonal
 *
 * Return: void
 */

void print_space(int x);

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			print_space(i);
			_putchar('\\');
			_putchar('\n');
			i++;
		}

	}
}

/**
 * print_space - print empty spaces in the terminal
 * @x: number of space(s) required.
 *
 * Return: void
 */

void print_space(int x)
{
	int i;

	if (!(x <= 0))
	{
		i = 0;
		while (i < x)
		{
			_putchar(' ');
			i++;
		}
	}

}
