#include "hash_tables.h"
/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: pointer of input
* @key: pointer of input
*
* Return: Always char
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
