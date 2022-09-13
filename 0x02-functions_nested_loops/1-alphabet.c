#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
