#include"main.h"
/**
 * print_sign - print + for n > zero, 0 for n=0, - for n<0
 *
 * @n: input to the function
 *
 * Return: 1 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
