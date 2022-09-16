#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int x, y, a, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		a = size - 1;
		for (x = 0; x < size; x++)
		{
			for (y = a; y > 0; y--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= x ; j++)
			{
				_putchar(35);
			}
			a--;
			_putchar('\n');
		}
	}
}
