#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @num: is the number \ character
 *
 * Return: Always 0
 */
void print_diagonal(int num)
{
	int i, j;

	if (num > 0)
	{
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
