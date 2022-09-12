#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all triple-digit numbers that are not the same
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundredth;
	int tenth;
	int ones = 0;

	while (ones <= 9)
	{
		tenth = 0;
		while (tenth <= 9)
		{
			hundredth = 0;
			while (hundredth <= 9)
			{
				if (ones != tenth &&
				    tenth > ones &&
				    tenth != hundredth &&
				    hundredth > tenth)
				{
					putchar(ones + 48);
					putchar(tenth + 48);
					putchar(hundredth + 48);
					if (tenth + ones + hundredth != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				hundredth;
			}
			tenth++;
		}
		ones++;
	}
	putchar('\n');
	return (0);
}
