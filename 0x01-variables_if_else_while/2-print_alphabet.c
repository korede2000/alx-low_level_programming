#include <stdio.h>

/**
 * main - print lowercase characers from a-z
 *
 * Return: 0
 *
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
