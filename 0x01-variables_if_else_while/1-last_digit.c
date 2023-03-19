#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - arithmetic computations
 * Return: always zero when all is right
 */
int main(void)
{
	int n;
	int lastlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastlast = n % 10;
	if (lastlast > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastlast);
	else if (lastlast == 0)
		printf("last digit od %d is %d and is 0\n", n, lastlast);
	else if (lastlast < 6 && !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastlast);
	return (0);
}
