#include <stdio.h>

/**
 * main - print all single digits separated by comma
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
