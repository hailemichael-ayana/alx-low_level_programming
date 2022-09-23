#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: input
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int z, y, x;

	if (n < 0)
	{
		_putchar(45);
		z = n * -1;
	}
	else
		z = n;
	y = z;
	x = 1;
	while (y > 9)
	{
		y /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)
		_putchar(((z / x) % 10) + 48);
}
