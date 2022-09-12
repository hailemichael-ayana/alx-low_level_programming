#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		putchar(numbers);
		if (numbers != 9)
			putchar(',');
		numbers++;
	}
	return (0);
}
