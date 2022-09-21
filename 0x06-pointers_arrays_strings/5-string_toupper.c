#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be converted to uppercase
 *
 * Return: pointer to the uppercase
 */

char *string_toupper(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
	}

	return (str);
}
