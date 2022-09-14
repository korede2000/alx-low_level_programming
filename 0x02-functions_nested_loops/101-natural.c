#include "main.h"
#include <stdio.h>

/**
 * natural - compute and prints the sum of multiple of 3 and 5 in
 * the range 1024
 *
 * Return: sum of the numbers
 */

int natural(void)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (sum);
}
