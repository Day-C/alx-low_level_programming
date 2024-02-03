#include "hash_tables.h"
/**
 * hash_table_print - function prints content of the hash table
 * @ht: pointer to hash table
 * Return: nothing(void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (i == 0)
			printf("{");
		
		printf("'%s':  '%s'",ht->array[i]->key, ht->array[i]->value);
		first++;
		if (first > 0)
			printf(", '%s':  '%s'",ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
