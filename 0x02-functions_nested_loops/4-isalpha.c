#include "main.h"
/**
 * _isalpha - function checks for alphabet character
 * @c: expecter character for the function
 * Return: return 1 if its a letter, 'upper or lower'case and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
