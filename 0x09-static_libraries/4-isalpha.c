#include"main.h"
/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 *
 * @c: input to the function
 *
 * Return: 1 for a letter
 * 0 otherwise
 */
int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	return (0);
}
