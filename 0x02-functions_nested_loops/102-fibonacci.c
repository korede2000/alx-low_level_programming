#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, current, previous;
	unsigned long fibb;

	i = 0;
	previous = 1;
	current = 2;
	while (i < 50)
	{
		if (i == 0)
		{
			printf("%d, ", previous);
		}
		else if (i == 1)
		{
			printf("%d, ", current);
		}
		else
		{
			fibb = current + previous;
			if (i < 49)
				printf("%lu, ", fibb);
			else
				printf("%lu", fibb);
			previous = current;
			current = fibb;
		}
		i++;
	}
	return (0);
}
