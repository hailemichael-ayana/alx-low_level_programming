#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single digit numbers using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		putchar(numbers + '0');
		numbers++;
	}
	putchar('\n');
	return (0);
}
