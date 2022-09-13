#include "main.h"

/**
 * main - program that prints _putchar, then a new line
 *
 * Return: 0
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
