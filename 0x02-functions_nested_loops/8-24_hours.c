#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, hour, min, h1, h2, m1, m2;

	i = 0;
	while (i < 1440)
	{
		hour = i / 60;
		min = i % 60;
		h1 = hour / 10;
		h2 = hour % 10;
		m1 = min / 10;
		m2 = min % 10;
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(58);
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
		i++;
	}
}
