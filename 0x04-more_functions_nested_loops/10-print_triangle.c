#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @n: size of the triangle
 *
 * Return: void
 */

void print_space(int n);
void print_hash(int n);
void print_triangle(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < size)
		{
			print_space(size - i - 1);
			print_hash(i + 1);
			_putchar('\n');
			i++;
		}
	}
}

/**
 * print_space - print space on terminal
 * @n: size of the space
 *
 * Return: void
 */

void print_space(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
	}
}

/**
 * print_hash - print hash on the terminal
 * @n: number(s) of hash to print
 * Return: void
 */

void print_hash(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('#');
			i++;
		}
	}
}
