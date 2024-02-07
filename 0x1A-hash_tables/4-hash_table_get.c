#include "hash_tables.h"
/**
 * hash_table_get - function retrives a value from hash table
 * @ht: table
 * @key: value key
 * Return: return value if found otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	}
	return (NULL);
}
