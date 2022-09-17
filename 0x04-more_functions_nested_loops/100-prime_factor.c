#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long x = 612852475143, y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
			x = x / y;
	}
	printf("%lu\n", x);
	return (0);
}
