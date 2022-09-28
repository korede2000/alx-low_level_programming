#include "main.h"

/**
 * _print_rev_recursion - prints a string in recursion
 * @s: pointer to the first character
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
