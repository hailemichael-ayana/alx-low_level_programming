#include "main.h"
/**
 * leet - encode strings
 *
 * @str : array
 *
 * Return: str
 */
char *leet(char *str)
{
	char word[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; word[j] != '\0' && str[i] != word[j]; j++)
		;
		if (j < 10)
		{
			str[i] = num[j];
		}
		i++;
	}
	return (str);
}
