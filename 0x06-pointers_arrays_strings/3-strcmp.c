#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 is equal to s2
 * positive if s1 > s2
 * negative if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	diff = s1 - s2;
	return (diff);
}
