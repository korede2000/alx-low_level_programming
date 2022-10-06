#include "main.h"

/**
 * string_nconcat - concatenates n chars of the second string
 * with the first string.
 * @s1: first string
 * @s2: second string
 * @n: number of character(s)
 * Return: pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, len = n;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat_str = malloc(sizeof(*concat_str) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat_str[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat_str[len++] = s2[index];

	concat_str[len] = '\0';

	return (concat_str);
}
