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
	hash_node_t *node, *temp;

	if (key == NULL || strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	index = key_index((unsigned char *)key, 1024);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;

	}
	else
	{
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
	}
	printf("success\n");
	printf("[%s] =[%s]\n", ht->array[index]->key, ht->array[index]->value);
	return (1);
}
