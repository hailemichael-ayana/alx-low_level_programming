#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: input to reverse
 *
 * Return: string and in reverse
 **/

void rev_string(char *s)

{
	char rev = s[0];
	int forward = 0;
	int i;

	while (s[forward] != '\0')
		forward++;
	for (i = 0; i < forward; i++)
	{
		forward--;
		rev = s[i];
		s[i] = s[forward];
		s[forward] = rev;
	}
}
