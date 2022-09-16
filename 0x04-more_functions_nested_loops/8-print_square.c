#include "main.h"
/**
 * print_square - print a square by #
 *
 * @s: is the size of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int s)
{
	int x, y;

	if (s > 0)
	{
		for (x = 0; x < s; x++)
		{
			for (y = 0; y < s; y++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
