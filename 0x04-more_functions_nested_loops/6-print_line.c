#include "main.h"
/**
 * print_line - print a straight line
 *
 * @num: is the number _
 */
void print_line(int num)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
