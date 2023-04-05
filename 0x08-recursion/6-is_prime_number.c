#include "main.h"
/**
 * is_prime_number - function prints 1 if input is prime number or 0 if not
 *@n: the  number input
 * Return: returns an integer. 1 if prime number or 0 if not
 */
int is_prime_number(int n)
{
	int isPrime = 0;

	if (n < 2)
		isPrime = 0;
	else if (n % 2 == 1)
		isPrime = 1;
	return (isPrime);
}
