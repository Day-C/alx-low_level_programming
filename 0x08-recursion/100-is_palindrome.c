#include "main.h"
/**
 * is_palindrome - function check if the reverce is the same as normal sting
 * @s: the string to be checked
 * Return: will return 1 if string is palindrome or 0 if not
 */
int check_palindrome(char *s, int left, int right);
int strlength(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_palindrome(s, 0, strlength(s)));
}

/**
 * check_palindrome - checks if the characters of left and right are the same
 * @s: the string to be checked
 * @left: the first character of the string from the left
 * @right:the right character of the string from the right
 * Return: returs 1 is palindrome and 0 if not.
 */
int check_palindrome(char *s, int left, int right)
{
	if (*(s + left) != *(s + right - 1))
		return (0);
	else if (left >= right)
		return (1);
	return (check_palindrome(s, left + 1, right - 1));
}

/**
 * strlength - function that checks the length of the string
 * @s: the string whoes length is checked
 * Return: retrns an increment of numbers
 */
int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}
