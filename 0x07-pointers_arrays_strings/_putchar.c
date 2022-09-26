#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: character to write to stdout
 *
 * Return 0
 */

int _putchar(char c);
{
	write(1, &c, 1);
	return (0);
}
