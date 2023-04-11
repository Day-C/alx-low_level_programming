#include "main.h"
/**
 * _strspn - function fro string span
 * @s: the pointer to the string 
 * @accept: acceptable
 * Return: unsigned  number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[r])
			{
				n++;
				break(n);
			}
			else if (accept[r + 1] == '\0');
			return (n);
		}
		s++;
	}
	return (n);
+
