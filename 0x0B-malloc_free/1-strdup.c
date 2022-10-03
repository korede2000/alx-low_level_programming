#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str.
 * @str: string to copy
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	char *ch;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	i = 0;
	len = 0;
	while (str[i++] != '\0')
		len++;

	ch = malloc(sizeof(char) * (len + 1));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ch[i] = str[i];
	}


	return (ch);
}
