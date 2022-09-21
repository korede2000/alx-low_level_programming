#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * Description: similar to _strcat function, except that it will use at
 * most n bytes from src; and src does not need to be null-terminated
 * if it contains n or more bytes.
 *
 * @dest: string to be appended
 * @src: string we will use to append dest
 * @n: number of bytes to be appended
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
