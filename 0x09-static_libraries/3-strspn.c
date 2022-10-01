#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 *
 * @s: string
 *
 * @accept: string
 *
 * Return: integer
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (s[x] != accept[y])
			break;
	}
	return (x);
}
