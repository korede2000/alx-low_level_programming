#include <stdio.h>

/**
 * main - sum of fibonacci series up to 4000000
 * that is even.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int current, previous, fibb;
	long long int sum;

	i = 0;
	previous = 0;
	current = 1;
	fibb = 0;
	sum = 0;

	while (fibb < 4000000)
	{
		fibb = previous + current;
		if (fibb % 2 == 0)
			sum = sum + fibb;
		previous = current;
		current = fibb;
		i++;
	}
	printf("%lli\n", sum);

	return (0);
}
