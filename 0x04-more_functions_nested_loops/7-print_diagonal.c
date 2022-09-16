#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @num: is the number \ character
 */
void print_diagonal(int num)
{
	int i, j;

	if (num > 0)
	{
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
