#include "hash_tables.h"
/**
 * hash_table_set - finction inserts a valuew into the hash table
 * @ht: pointer to hash table
 * @key: value key
 * @value: valuew associated with key
 * Return: return 0 on success otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *dict;

	if (strlen(key) == 0)
		return (1);

	dict = malloc(sizeof(hash_node_t));
	if (dict == NULL)
		return (1);
	dict->key = malloc(strlen(key) + 1);
	dict->value = malloc(strlen(value) + 1);

	strcpy(dict->key, key);
	strcpy(dict->value, value);

	index = key_index((unsigned char *)key, 1024);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = dict;
	}

	return (0);
}
