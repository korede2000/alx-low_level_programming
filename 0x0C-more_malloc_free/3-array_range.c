#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * (max - min + 1));

	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[j++] = i;
		}
		return (array);
	}
	else
		return (NULL);
}
