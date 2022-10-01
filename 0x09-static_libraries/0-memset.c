#include "main.h"

/**
 *_memset - afunction that fills memory with constant byte
 *
 *@s: space of memory
 *
 *@b: byte
 *
 *@n: memory area
 *
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
