#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 48;

	while (numbers <= 102)
	{
		putchar(numbers);
		if (numbers == 57)
			numbers += 39;
		numbers++;
	}
	putchar('\n');
	return (0);
}
