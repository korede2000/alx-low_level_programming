#include "main.h"

/**
 * _isupper - checks if character c is a uppercase
 * @c: character to check
 *
 * Return: 1 if c is a upper case 0 if not
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
