#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0-14.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
				_putchar(49);
			_putchar((j % 10) + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
