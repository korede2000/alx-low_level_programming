#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ch;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(ap, char*);
		if (ch != NULL)
			printf("%s", ch);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	putchar(10);
}
