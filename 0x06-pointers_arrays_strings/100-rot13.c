#include "main.h"
/**
 * rot13 - encode characters
 *
 * @arr: array of characters
 *
 * Return: arr
 */
char *rot13(char *arr)
{
	char ordered[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rand[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	while (arr[i] != '\0')
	{
		for (j = 0; orderd[j] != '\0' && arr[i] != orderd[j]; j++)
			;
		if (j < 52)
		{
			arr[i] = rand[j];
		}
		i++;
	}
	return (arr);
}
