#include "hash_tables.h"
/**
* hash_table_set - function thath adds an element to the hash table
* @ht: is the hash table you whant to add or update the key/value
* @key: is the key. Key can not be an empty string
* @value: is the value associated with the key
*
* Return: Always
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *New_Node;
	int index = 0;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	New_Node = malloc(sizeof(New_Node));
	if (New_Node == NULL)
		return (0);
	if (strcmp(key, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	New_Node->key = strdup(key);
	New_Node->value = strdup(value);
	New_Node->next = ht->array[index];
	ht->array[index] = New_Node;
	}
	return (1);
}
