#include "main.h"

/**
 * infinite_add - add two numbers
 *
 * @n1: first number
 *
 * @n2: second number
 *
 * @r: the buffer
 *
 * @size_r: the size of r
 *
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, add = 0, o, g, c, d;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		g = a;
	else
		g = b;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	a--, b--, size_r--;
	c = *(n1 + a) - 48, d = *(n2 + b) - 48;
	while (g >= 0)
	{
		o = c + d + add;
		if (o >= 10)
			add = o / 10;
		else
			add = 0;
		if (o > 0)
			*(r + g) = (o % 10) + 48;
		else
			*(r + g) = '0';
		if (a > 0)
			a--, c = *(n1 + a) - 48;
		else
			c = 0;
		if (b > 0)
			b--, d = *(n2 + b) - 48;
		else
			d = 0;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
