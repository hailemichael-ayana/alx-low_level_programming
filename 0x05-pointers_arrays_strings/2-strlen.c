#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: char input
 *
 * Return: length of the input string
 */

int _strlen(char *s)
{
	int x = 1, sum = 0;
	char letters = s[0];

	while (letters != '\0')
	{
		sum++;
		letters = s[i++];
	}
	return (sum);
}
