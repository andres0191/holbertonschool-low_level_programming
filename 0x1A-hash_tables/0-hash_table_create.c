#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: data of input, size of has table
 *
 * Return: Always temp_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tempTable = NULL;

	tempTable = malloc(sizeof(hash_table_t));
	if (tempTable == NULL)
		return (NULL);
	if (size <= 0)
		return (NULL);
	tempTable->size = size;
	tempTable->array = malloc(sizeof(hash_node_t *) * size);
	if (tempTable->array == NULL)
	{
		return (NULL);
	}
	return (tempTable);
}
