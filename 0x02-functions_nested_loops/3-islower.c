#include"main.h"
/**
 * _islower - checks if a character is in lowercase
 *
 * @c: input to the function
 *
 * Return: 1 for lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
