#include "main.h"

/**
 * swap_int - a function that swaps 2  numbers
 *
 * @a: input 1
 *
 * @b: input 2
 *
 * Return: always
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
