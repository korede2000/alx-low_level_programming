#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array contaaining the elements
 * @size: number of elements in the array
 * @cmp: function which compares values
 *
 * Return: -1 if no element match
 * or when size is less than zero
 * return index corresponding to the elemet
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
