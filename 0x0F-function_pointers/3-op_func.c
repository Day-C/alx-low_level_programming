#include "3-calc.h"
#include <stdioh>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function adds two integer inputs
 * @a: first input;
 * @b: second input;
 * Return: sum of both numbers
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub -  function subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplies inputs
 * @a: first number
 * @b: second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function devides inputs
 * @a: first input
 * @b: second input
 * Return: devision
 */
int op_div(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - finction gets the mode of input values
 * @a: first input
 * @b: second input
 * Return: modula
 */
int op_mod(int a, int b)
{
	return (a % b);

}
