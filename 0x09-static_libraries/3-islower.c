#include "main.h"

/**
 * _islower - checks if c is a lowercase alphabet
 * @c: The character to check
 *
 * Return: 1 if c is a character
 * and 0 if c is not a character
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
