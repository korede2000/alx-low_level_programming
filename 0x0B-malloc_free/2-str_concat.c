#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i, len, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ch = malloc(sizeof(char) * len);

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ch[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		ch[index++] = s2[i];

	return (ch);
}
