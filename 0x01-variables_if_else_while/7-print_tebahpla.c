#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printthe alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}
