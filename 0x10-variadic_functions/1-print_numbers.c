#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator: string
 *
 * @n: integer
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list argp;

	va_start(argp, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(argp, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argp);
}
