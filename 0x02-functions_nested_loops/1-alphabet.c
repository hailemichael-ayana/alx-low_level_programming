#include"main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
