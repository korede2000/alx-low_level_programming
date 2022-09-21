#include "main.h"

/**
 * _strcat - concatenates two strings
 * Desc: appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: string that will be appended
 * @src: string to use for appending
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;

	while (*(dest + index++))
		dest_len++;

	for (index = 0; *(src + index); index++)
		dest[dest_len++] = *(src + index);

	return (dest);
}
