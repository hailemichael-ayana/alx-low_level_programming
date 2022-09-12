#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all double-digit numbers that are not the same
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tenth;
	int ones = 0;

	while (ones <= 9)
	{
		tenth = 0;
		while (tenth <= 9)
		{
			if (ones != tenth && tenth > ones)
			{
				putchar(ones + 48);
				putchar(tenth + 48);
				if (tenth + ones != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			tenth++;
		}
		ones++;
	}
	putchar('\n');
	return (0);
}
