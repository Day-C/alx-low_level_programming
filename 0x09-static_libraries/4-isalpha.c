#include "main.h"
/**
 * _isalpha - function checks for alphabetic characters
 * @c: the string input to be checked
 * Return: returns 1 if c is aletter or 0 isnot
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}	
