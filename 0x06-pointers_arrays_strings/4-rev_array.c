#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of eleents in the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
