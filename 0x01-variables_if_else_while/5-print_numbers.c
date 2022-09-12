#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		printf("%i", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
