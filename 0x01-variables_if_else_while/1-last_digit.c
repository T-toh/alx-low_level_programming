#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints a random number of last digit once executed
 * and indicates whether is greater that 5, less than 6, or 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	int m;

	m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (m > 5)
	{
		printf("last digit of %d is %d and is  greater than 5\n", n, m);
	}
	if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	if (m == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
