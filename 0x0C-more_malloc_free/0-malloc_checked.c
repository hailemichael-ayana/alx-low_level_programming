#include"main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to the allocated memory
 *
 * @b: integer
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
