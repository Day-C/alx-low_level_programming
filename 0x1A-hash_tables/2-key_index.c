#include "hash_tables.h"
/**
 * key_index - function returns number within the range of the size
 * @key: key
 * @size: array size
 * Return: number within size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int djb2;

	djb2 = hash_djb2(key);
	index = djb2 % size;
	return (index);
}
