#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific character.
 * @size: size of the array
 * @c: iitial character
 * Return: pointer to the char.
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(*ch) * size);

	if (ch == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ch[index] = c;

	return (ch);
}
