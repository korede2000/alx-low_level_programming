include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
