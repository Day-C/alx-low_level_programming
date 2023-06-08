#include "main.h"

int prime_checker(int number, int less);
/**
 * is_prime_number - function takes in an integer and checks if its
 * a prime number
 * @n:input integer and argument to the function
 * Return: return 1 if input is prime and  if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}

/**
 * prime_checker - function checke if number is a prime number or not
 * @number: first input
 * @less: second inpur
 * Return: returns 1 if prime or 0 if not
 */
int prime_checker(int number, int less)
{
	if (less == 1)
		return (1);
	else if (number % less == 0)
	{
		if (less > 0)
			return (0);
	}

	return (prime_checker(number, less - 1));
}
