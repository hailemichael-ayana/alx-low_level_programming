#include "main.h"
/**
 * _strlen_recursion - return the length of string
 *
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
		return (0);
	x = _strlen_recursion(s + 1) + 1;
	return (x);
}
