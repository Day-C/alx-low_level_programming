#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: array size Return:
 * Return: pointer to ash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
