#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @num: is the number \ character
 */
void print_diagonal(int num)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
