#include "main.h"
/**
 * _isupper - check if c is upper
 *
 * @c: input
 *
 * Return: 1 if its uppercase, 0 for other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
