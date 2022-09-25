#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 *
 * @n: input integer
 *
 * Return: no return
 */

void print_number(int n)

{

	unsigned int a, b, x;

	if (n < 0)
	{

		putchar(45);

		a = n * -1;
	}
	else
		a = n;
	b = a;
	x = 1;
	while (b > 9)
	{
		b /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)

		putchar(((a / x) % 10) + 48);

}
