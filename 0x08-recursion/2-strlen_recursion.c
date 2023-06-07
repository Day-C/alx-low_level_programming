#include "main.h"
/**
 * _strlen_recursion - function returns the length of a sting argument
 * @s: pointer to string
 * Return: length of sting(int)
 */
int _strlen_recursion(char *s)
{
	int i = 1;
	/*	base case	*/
	if (*s == '\0')
		return(0);
	/*	recursion	*/
	return(i + _strlen_recursion(s + 1));
}
