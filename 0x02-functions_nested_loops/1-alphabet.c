#include"main.h"
/**
 * main - Entry point
 *
 * Description: prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
