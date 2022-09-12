#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: Get a random number and check its last digit, compare it with 5
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastNum);
	else if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
