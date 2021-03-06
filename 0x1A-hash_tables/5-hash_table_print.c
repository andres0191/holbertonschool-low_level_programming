#include "hash_tables.h"
/**
* hash_table_print - function thath prints a hash table
* @ht: array of hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int bandera = 0;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			while (ht->array[i] != NULL)
			{
				if (i > 0 && bandera == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				bandera = 1;
				ht->array[i] = ht->array[i]->next;
			}
			i++;
		}
	}
	printf("}\n");
}
