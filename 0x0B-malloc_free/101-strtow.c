#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * word_count - counts the number of words in a sentence
 * @s:  to sting to be counted
 * Return: number of words
 */
int word_count(char *s)
{
	int i, w, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
			flag = 1;
		w++;
	}
	return (w);
}

/**
 * strtow - double  pointer,that takes in an array of stings
 * the function splits a string to words
 * @str: string to be split
 * Return: pointer  array of string words
 */

char **strtow(char *str)
{
	char **matrix, *mp;

	int start, end, i, words, len, c, k = 0;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] ==  ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				mp = (char *)malloc(sizeof(char) * (c + 1));
				if (mp == NULL)
					return (NULL);
				while (start < end)
					*mp++ = str[start++];
				*mp = '\0';

				matrix[k] = mp - c;

				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;

	}
	matrix[k] = NULL;
	return (matrix);
}
