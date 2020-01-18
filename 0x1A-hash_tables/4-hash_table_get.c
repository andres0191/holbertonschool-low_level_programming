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
	unsigned int index = 0;
	hash_node_t *aux;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL)
		return (NULL);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
