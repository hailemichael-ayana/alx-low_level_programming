#include "main.h"
/**
 * cap_string - capitalize characters
 *
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sym[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		for (j = 0; sym[j] != '\0'; j++)
		{
			if (str[i - 1] == sym[j] && str[i] <= 122 && str[i] >= 97)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
