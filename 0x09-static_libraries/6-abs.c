#include"main.h"
/**
 * _abs - function that computes the absolute values
 *
 * @num: input to the function
 *
 * Return: always |num|
 */
int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
