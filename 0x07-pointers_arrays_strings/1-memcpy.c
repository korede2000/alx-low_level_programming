#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to where we are copying to
 * @src: pointer to where we are copying from
 * @n: number of bytes to copy
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
