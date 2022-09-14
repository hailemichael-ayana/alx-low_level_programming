#include"main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int letter;
	for (letter = 0; letter < 8; letter++)
		_putchar(str[letter]);
	_putchar('\n');
	return (0);
}
