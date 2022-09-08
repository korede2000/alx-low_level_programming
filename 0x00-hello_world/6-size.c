#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various typeson the computer it is compiled
 * and run on
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(long long int));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(float));
	return (0);
}
