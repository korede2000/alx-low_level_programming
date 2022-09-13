#include "main.h"

/**
 * times_table - print the 9 times table starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, product, ten, unit;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;
			ten = product / 10;
			unit = product % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(44);
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(unit + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
