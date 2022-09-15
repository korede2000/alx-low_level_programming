#include <stdio.h>

/**
 * main - print 1-100
 * if number is a multiple of 3 print fizz instead
 * if number is a multiple of 5 print buzz instead
 * if number is a multiple of 3 and 5 print fizz buzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 5 == 0 && i != 100)
			printf("%s ", "Buzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
