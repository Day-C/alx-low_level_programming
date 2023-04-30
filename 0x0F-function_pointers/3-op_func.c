#include "3-calc.h"
#include <stdioh>

/**
 * op_add - function adds two integer inputs
 * @a: first input;
 * @second input;
 * Return: sum of both numbers
 */
int op_add(int a, int b)
{
	int sum;

	sum  = (a + b);
	return (sum);
}

/**
 * op_sub -  function subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	int sub;

	sub = (a - b);
	return (sub);
}
/**
 * op_mul - function multiplies inputs
 * @a: first number
 * @b: second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	int mult;

	mult = (a * b);
	return (mult);
}

/**
 * op_div - function devides inputs
 * @a: first input
 * @b: second input
 * Return: devision
 */
int op_div(int a, int b)
{
	int divi;

	divi = (a * b);
	return (divi);
}

/**
 * op_mod - finction gets the mode of input values
 * @a: first input
 * @b: second input
 * Return: modula
 */
int op_mod(int a, int b)
{
	int modu;

	modu = (a % b);
	return (modu);
}
