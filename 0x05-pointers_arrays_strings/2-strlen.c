#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to consider the length
 *
 * Return: length of the string in integer
 */

int _strlen(char *s)
{
	char *a;
	int b;

	a = s;
	while (*s != '\0')
		s++;
	b = (long int)s - (long int)a;
	return (b);
}
