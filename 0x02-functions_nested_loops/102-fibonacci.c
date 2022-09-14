#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int current, previous, fibb;

	i = 0;
	previous = 0;
	current = 1;
	fibb = 0;

	while (i < 49)
	{
		fibb = previous + current;
		printf("%li, ", fibb);
		previous = current;
		current = fibb;

		i++;
	}
	fibb = previous + current;
	printf("%li\n", fibb);

	return (0);
}
