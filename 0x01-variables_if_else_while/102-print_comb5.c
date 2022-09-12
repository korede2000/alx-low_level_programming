#include <stdio.h>

/**
 * main - print all possible combination of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, m, n;

	i = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			m = i;
			n = j + 1;
			while (m < 58)
			{
				while (n < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(m);
					putchar(n);
					if (i < 57 || j < 56 || m < 57 || n < 57)
					{
						putchar(44);
						putchar(32);
					}
					n++;
				}
				n = 48;
				m++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
