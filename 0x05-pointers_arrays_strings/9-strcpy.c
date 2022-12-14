#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}
