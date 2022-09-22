#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encodded
 *
 * Return: - pointer to the encodded string
 */

char *leet(char *str)
{
	int i, str_index;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	str_index = 0;
	while (str[str_index] != '\0')
	{
		for (i = 0; i <= 7; i++)
		{
			if (str[str_index] == leet[i] || str[str_index] - 32 == leet[i])
				str[str_index] = i + '0';
		}
		str_index++;
	}

	return (str);
}
