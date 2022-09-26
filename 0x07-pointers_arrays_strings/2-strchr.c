#include "main.h"

/**
 * _strchr - locates the first occurrence of a character
 * @s: pointer to the string
 * @c: character we are looking for
 *
 * Return: On sucess returns a pointer to the character
 * Null if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *sp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			sp = (s + i);
			break;
		}
		else
			sp = NULL;

		i++;
	}
	return (sp);
}
