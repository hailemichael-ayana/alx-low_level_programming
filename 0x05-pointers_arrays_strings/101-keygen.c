#include "main.h"

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	char pass[100];
	int x, n, i;

	n = 0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		x = rand() % 122;
		if (x > 32)
		{
			pass[i++] = x;
			n += x;
		}
	}
	pass[i++] = (2772 - n);
	pass[i] = '\0';
	printf("%s", pass);
	return (0);
}
