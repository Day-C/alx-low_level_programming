#include "hash_tables.h"
/**
 * hash_table_print - function prints content of the hash table
 * @ht: pointer to hash table
 * Return: nothing(void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (count < 1)
		{
			printf("'%s':  '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
			continue;
		}
		if (count > 0)
			printf(", '%s':  '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
