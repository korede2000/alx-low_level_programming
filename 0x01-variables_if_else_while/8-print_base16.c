#include <stdio.h>

/**
 * main - print the char of hex i.e 0-f
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 0;

	while (i < 103)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 96)
			putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
