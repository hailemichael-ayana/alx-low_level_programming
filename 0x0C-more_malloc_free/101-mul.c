#include "main.h"

/**
 * main - a function that multiplies two positive numbers
 *
 * @x: input
 *
 * @y: input(array)
 *
 * Return: product
 */

int main(int x, char *y[])
{
	unsigned long z;
	int i, j;

	if (x != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < x; i++)
	{
		for (j = 0; y[i][j] != '\0'; j++)
		{
			if (y[i][j] > 57 || y[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	m = atol(y[1]) *  atol(y[2]);
	printf("%lu\n", m);
	return (0);
}
