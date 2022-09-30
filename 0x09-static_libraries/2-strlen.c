#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to consider the length
 *
 * Return: length of the string in integer
 */

int _strlen(char *s)
{
	int b;

	b = 0;
	while (*s != '\0')
	{
		b++;
		s++;
	}
	return (b);
}
