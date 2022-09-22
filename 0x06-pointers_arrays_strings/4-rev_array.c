#include "main.h"
/**
 * reverse_array - reversing array
 *
 * @a: integer
 *
 * @n: integer
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int last = 0;
	int j = 0;

	n -= 1;
	while (i < n)
	{
		j = a[i];
		last = a[n];
		a[n] = j;
		a[i] = last;
		i++;
		n--;
	}
}
