#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int letter;

	while (count < 10)
	{
		letter = 97;
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
